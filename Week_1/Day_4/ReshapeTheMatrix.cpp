// Optimal Approach
#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
{
    int m = mat.size();
    int n = mat[0].size();
    if (m * n != r * c) return mat;
    vector<vector<int>> ans(r, vector<int>(c));
    for (int i = 0; i < m * n; i++)
    {
        ans[i / c][i % c] = mat[i / n][i % n];
    }
    return ans;
}
int main()
{
    int m, n;
    cout << "Enter number of rows and columns: ";
    cin >> m >> n;
    vector<vector<int>> mat(m, vector<int>(n));
    cout << "Enter the elements of Matrix:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
        }
    }
    int r, c;
    cout << "Enter new rows and columns: ";
    cin >> r >> c;
    vector<vector<int>> result = matrixReshape(mat, r, c);
    cout << "Reshaped Matrix:\n";
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[0].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
// Time Complexity --> O(m * n)
// Space Complexity --> O(r * c)
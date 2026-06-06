// Optimal Approach
#include <iostream>
#include <vector>
using namespace std;
vector<int> spiralOrder(vector<vector<int>> &matrix)
{
    int left = 0;
    int right = matrix[0].size() - 1;
    int top = 0;
    int bottom = matrix.size() - 1;
    vector<int> ans;
    while (left <= right && top <= bottom)
    {
        for (int i = left; i <= right; i++)
        {
            ans.push_back(matrix[top][i]);
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            ans.push_back(matrix[i][right]);
        }
        right--;
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    return ans;
}
int main()
{
    int m, n;
    cout << "Enter number of rows and columns: ";
    cin >> m >> n;
    vector<vector<int>> matrix(m, vector<int>(n));
    cout << "Enter the elements of Matrix:\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    vector<int> result = spiralOrder(matrix);
    cout << "Spiral Order: ";
    for (int num : result)
    {
        cout << num << " ";
    }
    return 0;
}
// Time Complexity --> O(m * n)
// Space Complexity --> O(m * n) 
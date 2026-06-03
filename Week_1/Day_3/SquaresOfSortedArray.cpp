// Optimal Approach
#include <iostream>
#include <vector>
using namespace std;
vector<int> sortedSquares(vector<int> &arr)
{
    vector<int> result(arr.size());
    int left = 0;
    int right = arr.size() - 1;
    int pos = arr.size() - 1;
    while (left <= right)
    {
        if (abs(arr[left]) > abs(arr[right]))
        {
            result[pos] = arr[left] * arr[left];
            left++;
        }
        else
        {
            result[pos] = arr[right] * arr[right];
            right--;
        }
        pos--;
    }
    return result;
}
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the Elements of Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> result = sortedSquares(arr);
    cout << "Sorted Squares Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}
// Time Complexity --> O(n)
// Space Complexity --> O(n)
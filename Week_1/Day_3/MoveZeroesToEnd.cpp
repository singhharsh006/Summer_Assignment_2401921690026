// Optimal Approach
#include <iostream>
#include <algorithm>
using namespace std;
void moveZeroes(int n, int *arr)
{
    int i = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[j], arr[i]);
            i++;
        }
    }
}
int main()
{
    int n;
    cout << "Enter the value of of n: ";
    cin >> n;
    int arr[n];
    cout << "Enter the Elements of Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    moveZeroes(n, arr);
    cout << "Array after moving Zeroes to end: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
// Time Complexity --> O(n)
// Space Complexity --> O(1)
// Only for Sorted Array
#include <iostream>
using namespace std;
int removeDuplicates(int n, int *arr)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i + 1;
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
    cout << "Length of the New Array is: " << removeDuplicates(n, arr);
    return 0;
}
// Time Complexity --> O(n)
// Space Complexity --> O(1)

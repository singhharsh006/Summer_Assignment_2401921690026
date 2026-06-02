// Optimal Approach
#include <iostream>
#include <vector>
using namespace std;
int stockBuySell(vector<int> &arr)
{
    int mini = arr[0];
    int maxProfit = 0;
    for (int i = 1; i < arr.size(); i++)
    {
        int cost = arr[i] - mini;
        maxProfit = max(maxProfit, cost);
        mini = min(mini, arr[i]);
    }
    return maxProfit;
}
int main()
{
    int n;
    cout << "Enter the value of of n: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the Elements of Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Maximum Profit in Stock Buy & Sell is: " << stockBuySell(arr);
    return 0;
}
// Time Complexity --> O(n)
// Space Complexity --> O(1)
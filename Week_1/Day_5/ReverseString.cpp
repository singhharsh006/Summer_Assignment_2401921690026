// Optimal Approach
#include <iostream>
#include <vector>
using namespace std;
void reverseString(vector<char> &s)
{
    int start = 0;
    int end = s.size() - 1;
    while (start < end)
    {
        swap(s[start++], s[end--]);
    }
}
int main()
{
    int n;
    cout << "Enter the number of Characters: ";
    cin >> n;
    vector<char> s(n);
    cout << "Enter the Characters: ";
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    reverseString(s);
    cout << "Reversed String: ";
    for (char ch : s)
    {
        cout << ch << " ";
    }
    return 0;
}
// Time Complexity --> O(n)
// Space Complexity --> O(1)
// Optimal Approach
#include <iostream>
#include <string>
using namespace std;
bool repeated_SubstringPattern(string s)
{
    return (s + s).find(s, 1) < s.size();
}
int main()
{
    string s;
    cout << "Enter the String: ";
    cin >> s;
    if (repeated_SubstringPattern(s)) cout << "True";
    else cout << "False";
    return 0;
}
// Time Complexity --> O(n)
// Space Complexity --> O(n)
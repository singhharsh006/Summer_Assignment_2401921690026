// Optimal Approach
#include <iostream>
using namespace std;
bool isPalindrome(string s)
{
    int start = 0;
    int end = s.size() - 1;
    while (start < end)
    {
        if (!isalnum(s[start]))
        {
            start++;
            continue;
        }
        if (!isalnum(s[end]))
        {
            end--;
            continue;
        }
        if (tolower(s[start]) != tolower(s[end])) return false;
        start++;
        end--;
    }
    return true;
}
int main()
{
    string s;
    cout << "Enter a String: ";
    getline(cin, s);
    if (isPalindrome(s)) cout << "Palindrome!";
    else cout << "Not a Palindrome!";
    return 0;
}
// Time Complexity --> O(n)
// Space Complexity --> O(1)
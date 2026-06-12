// Optimal Approach
#include <iostream>
#include <stack>
#include <string>
#include <cctype>
using namespace std;
string decode_String(string s)
{
    stack<int> countStack;
    stack<string> stringStack;
    string currString = "";
    int num = 0;
    for (char ch : s)
    {
        if (isdigit(ch)) num = num * 10 + (ch - '0');
        else if (ch == '[')
        {
            countStack.push(num);
            stringStack.push(currString);
            num = 0;
            currString = "";
        }
        else if (ch == ']')
        {
            int repeat = countStack.top();
            countStack.pop();
            string prevString = stringStack.top();
            stringStack.pop();
            string temp = "";
            for (int i = 0; i < repeat; i++) temp += currString;
            currString = prevString + temp;
        }
        else currString += ch;
    }
    return currString;
}
int main()
{
    string s;
    cout << "Enter encoded String: ";
    cin >> s;
    cout << "Decoded String: " << decode_String(s);
    return 0;
}
// Time Complexity --> O(n * k)
// Space Complexity --> O(n)
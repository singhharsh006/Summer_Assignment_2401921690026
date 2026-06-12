// Optimal Approach
#include <iostream>
#include <vector>
#include <string>
using namespace std;
int compress(vector<char> &chars)
{
    int n = chars.size();
    int index = 0;
    for (int i = 0; i < n;)
    {
        char curr = chars[i];
        int count = 0;
        while (i < n && chars[i] == curr)
        {
            count++;
            i++;
        }
        chars[index++] = curr;
        if (count > 1)
        {
            string freq = to_string(count);

            for (char ch : freq)
            {
                chars[index++] = ch;
            }
        }
    }
    return index;
}
int main()
{
    int n;
    cout << "Enter number of Characters: ";
    cin >> n;
    vector<char> chars(n);
    cout << "Enter the Characters:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> chars[i];
    }
    int newLength = compress(chars);
    cout << "Compressed Characters: ";
    for (int i = 0; i < newLength; i++)
    {
        cout << chars[i] << " ";
    }
    cout << "\nNew Length: " << newLength;
    return 0;
}
// Time Complexity --> O(n)
// Space Complexity --> O(1)
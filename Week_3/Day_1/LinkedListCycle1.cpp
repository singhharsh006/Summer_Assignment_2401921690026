// Optimal Approach
#include <iostream>
using namespace std;
class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode(int x)
    {
        val = x;
        next = NULL;
    }
};
bool hasCycle(ListNode *head)
{
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) return true;
    }
    return false;
}
int main()
{
    int n;
    cout << "Enter number of Nodes: ";
    cin >> n;
    if (n == 0)
    {
        cout << "False";
        return 0;
    }
    ListNode *head = NULL;
    ListNode *tail = NULL;
    cout << "Enter node values:\n";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ListNode *newNode = new ListNode(x);
        if (head == NULL) head = tail = newNode;
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    cout << (hasCycle(head) ? "True" : "False");
    return 0;
}
// Time Complexity --> O(n)
// Space Complexity --> O(1)
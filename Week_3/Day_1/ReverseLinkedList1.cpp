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
ListNode* reverseList(ListNode* head)
{
    ListNode* prev = NULL;
    ListNode* curr = head;
    while (curr)
    {
        ListNode* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}
int main()
{
    int n;
    cout << "Enter number of Nodes: ";
    cin >> n;
    ListNode* head = NULL;
    ListNode* tail = NULL;
    cout << "Enter node values:\n";
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        ListNode* newNode = new ListNode(x);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    head = reverseList(head);
    cout << "Reversed Linked List: ";
    while (head)
    {
        cout << head->val << " ";
        head = head->next;
    }
    return 0;
}
// Time Complexity --> O(n)
// Space Complexity --> O(1)
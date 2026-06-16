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
ListNode* removeNth_fromEnd(ListNode* head, int n)
{
    ListNode dummy(0);
    dummy.next = head;
    ListNode* fast = &dummy;
    ListNode* slow = &dummy;
    for (int i = 0; i <= n; i++) fast = fast->next;
    while (fast)
    {
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = slow->next->next;
    return dummy.next;
}
int main()
{
    int size;
    cout << "Enter number of Nodes: ";
    cin >> size;
    ListNode* head = NULL;
    ListNode* tail = NULL;
    cout << "Enter Node values:\n";
    for (int i = 0; i < size; i++)
    {
        int x;
        cin >> x;
        ListNode* newNode = new ListNode(x);
        if (head == NULL) head = tail = newNode;
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    int n;
    cout << "Enter value of n: ";
    cin >> n;
    head = removeNth_fromEnd(head, n);
    cout << "Linked List after removal: ";
    while (head)
    {
        cout << head->val << " ";
        head = head->next;
    }
    return 0;
}
// Time Complexity --> O(n)
// Space Complexity --> O(1)
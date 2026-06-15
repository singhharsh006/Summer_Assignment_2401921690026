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
ListNode* middleNode(ListNode* head)
{
    ListNode* slow = head;
    ListNode* fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
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
        if (head == NULL) head = tail = newNode;
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }
    ListNode* middle = middleNode(head);
    cout << "Middle Node Value: " << middle->val;
    return 0;
}
// Time Complexity --> O(n)
// Space Complexity --> O(1)
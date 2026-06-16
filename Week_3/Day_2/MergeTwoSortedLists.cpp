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
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
{
    ListNode dummy(-1);
    ListNode* tail = &dummy;
    while (list1 && list2)
    {
        if (list1->val <= list2->val)
        {
            tail->next = list1;
            list1 = list1->next;
        }
        else
        {
            tail->next = list2;
            list2 = list2->next;
        }
        tail = tail->next;
    }
    if (list1) tail->next = list1;
    if (list2) tail->next = list2;
    return dummy.next;
}
int main()
{
    int n1, n2;
    cout << "Enter number of Nodes in first Sorted list: ";
    cin >> n1;
    ListNode* list1 = NULL;
    ListNode* tail1 = NULL;
    cout << "Enter Node values:\n";
    for (int i = 0; i < n1; i++)
    {
        int x;
        cin >> x;
        ListNode* newNode = new ListNode(x);
        if (list1 == NULL) list1 = tail1 = newNode;
        else
        {
            tail1->next = newNode;
            tail1 = newNode;
        }
    }
    cout << "Enter number of Nodes in second ßorted list: ";
    cin >> n2;
    ListNode* list2 = NULL;
    ListNode* tail2 = NULL;
    cout << "Enter Node values:\n";
    for (int i = 0; i < n2; i++)
    {
        int x;
        cin >> x;
        ListNode* newNode = new ListNode(x);
        if (list2 == NULL) list2 = tail2 = newNode;
        else
        {
            tail2->next = newNode;
            tail2 = newNode;
        }
    }
    ListNode* mergedList = mergeTwoLists(list1, list2);
    cout << "Merged Linked List: ";
    while (mergedList)
    {
        cout << mergedList->val << " ";
        mergedList = mergedList->next;
    }
    return 0;
}
// Time Complexity --> O(n + m)
// Space Complexity --> O(1)
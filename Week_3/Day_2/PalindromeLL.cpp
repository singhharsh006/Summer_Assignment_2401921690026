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
ListNode* reverse(ListNode* head)
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
bool check_isPalindrome(ListNode* head)
{
    ListNode* slow = head;
    ListNode* fast = head;
    while (fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    ListNode* secondHalf = reverse(slow);
    ListNode* firstHalf = head;
    while (secondHalf)
    {
        if (firstHalf->val != secondHalf->val) return false;
        firstHalf = firstHalf->next;
        secondHalf = secondHalf->next;
    }
    return true;
}
int main()
{
    int n;
    cout << "Enter number of Nodes: ";
    cin >> n;
    ListNode* head = NULL;
    ListNode* tail = NULL;
    cout << "Enter Node values:\n";
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
    if (check_isPalindrome(head)) cout << "True!";
    else cout << "False!";
    return 0;
}
// Time Complexity --> O(n)
// Space Complexity --> O(1)
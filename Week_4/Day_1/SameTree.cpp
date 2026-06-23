// Optimal Approach
#include <iostream>
#include <queue>
using namespace std;
class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x)
    {
        val = x;
        left = NULL;
        right = NULL;
    }
};
bool is_SameTree(TreeNode *p, TreeNode *q)
{
    queue<TreeNode *> qp, qq;
    qp.push(p);
    qq.push(q);
    while (!qp.empty() && !qq.empty())
    {
        TreeNode *n1 = qp.front();
        qp.pop();
        TreeNode *n2 = qq.front();
        qq.pop();
        if (!n1 && !n2) continue;
        if (!n1 || !n2) return false;
        if (n1->val != n2->val) return false;
        qp.push(n1->left);
        qp.push(n1->right);
        qq.push(n2->left);
        qq.push(n2->right);
    }
    return true;
}
int main()
{
    TreeNode *p = new TreeNode(1);
    p->left = new TreeNode(2);
    p->right = new TreeNode(3);
    TreeNode *q = new TreeNode(1);
    q->left = new TreeNode(2);
    q->right = new TreeNode(3);
    if (is_SameTree(p, q)) cout << "True!";
    else cout << "False!";
    return 0;
}
// Time Complexity --> O(n)
// Space Complexity --> O(n)
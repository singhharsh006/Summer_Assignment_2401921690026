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
TreeNode *invert_Tree(TreeNode *root)
{
    if (!root) return NULL;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        TreeNode *node = q.front();
        q.pop();
        swap(node->left, node->right);
        if (node->left) q.push(node->left);
        if (node->right) q.push(node->right);
    }
    return root;
}
void level_Order(TreeNode *root)
{
    if (!root) return;
    queue<TreeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        TreeNode *node = q.front();
        q.pop();
        cout << node->val << " ";
        if (node->left) q.push(node->left);
        if (node->right) q.push(node->right);
    }
}
int main()
{
    TreeNode *root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(9);
    root = invert_Tree(root);
    cout << "Inverted Tree: ";
    level_Order(root);
    return 0;
}
// Time Complexity --> O(n)
// Space Complexity --> O(n)
// Optimal Approach
#include <iostream>
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
TreeNode* lowest_CommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
{
    while (root)
    {
        if (p->val < root->val && q->val < root->val) root = root->left;
        else if (p->val > root->val && q->val > root->val) root = root->right;
        else return root;
    }
    return NULL;
}
int main()
{
    TreeNode* root = new TreeNode(6);
    root->left = new TreeNode(2);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(0);
    root->left->right = new TreeNode(4);
    root->right->left = new TreeNode(7);
    root->right->right = new TreeNode(9);
    root->left->right->left = new TreeNode(3);
    root->left->right->right = new TreeNode(5);
    TreeNode* p = root->left;
    TreeNode* q = root->left->right;
    TreeNode* lca = lowest_CommonAncestor(root, p, q);
    cout << "Lowest Common Ancestor: " << lca->val;
    return 0;
}
// Time Complexity --> O(h)
// Space Complexity --> O(1)
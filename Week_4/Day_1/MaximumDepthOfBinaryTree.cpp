// Optimal Approach
#include <iostream>
#include <algorithm>
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
int max_Depth(TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftDepth = max_Depth(root->left);
    int rightDepth = max_Depth(root->right);
    return 1 + max(leftDepth, rightDepth);
}
int main()
{
    TreeNode *root = new TreeNode(3);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    cout << "Maximum Depth of Binary Tree is: " << max_Depth(root);
    return 0;
}
// Time Complexity --> O(n)
// Space Complexity --> O(h)
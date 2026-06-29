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
int diameter = 0;
int height(TreeNode* root)
{
    if (root == NULL) return 0;
    int leftHeight = height(root->left);
    int rightHeight = height(root->right);
    diameter = max(diameter, leftHeight + rightHeight);
    return 1 + max(leftHeight, rightHeight);
}
int diameter_OfBinaryTree(TreeNode* root)
{
    diameter = 0;
    height(root);
    return diameter;
}
int main()
{
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    cout << "Diameter of Binary Tree: " << diameter_OfBinaryTree(root);
    return 0;
}
// Time Complexity --> O(n)
// Space Complexity --> O(h)
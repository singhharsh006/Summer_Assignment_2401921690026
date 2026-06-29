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
TreeNode* searchIn_BST(TreeNode* root, int val)
{
    while (root)
    {
        if (root->val == val) return root;
        else if (val < root->val) root = root->left;
        else root = root->right;
    }
    return NULL;
}
int main()
{
    TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(7);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    int val;
    cout << "Enter value to Search: ";
    cin >> val;
    TreeNode* result = searchIn_BST(root, val);
    if (result) cout << "Node Found: " << result->val;
    else cout << "Node Not Found!";
    return 0;
}
// Time Complexity --> O(h)
// Space Complexity --> O(1)
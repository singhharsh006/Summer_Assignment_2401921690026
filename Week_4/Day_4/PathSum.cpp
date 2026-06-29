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
bool has_PathSum(TreeNode* root, int targetSum)
{
    if (root == NULL) return false;
    if (root->left == NULL && root->right == NULL) return targetSum == root->val;
    return has_PathSum(root->left, targetSum - root->val) || has_PathSum(root->right, targetSum - root->val);
}
int main()
{
    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(4);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(11);
    root->left->left->left = new TreeNode(7);
    root->left->left->right = new TreeNode(2);
    root->right->left = new TreeNode(13);
    root->right->right = new TreeNode(4);
    root->right->right->right = new TreeNode(1);
    int targetSum;
    cout << "Enter Target Sum: ";
    cin >> targetSum;
    if (has_PathSum(root, targetSum)) cout << "True!";
    else cout << "False!";
    return 0;
}
// Time Complexity --> O(n)
// Space Complexity --> O(h)
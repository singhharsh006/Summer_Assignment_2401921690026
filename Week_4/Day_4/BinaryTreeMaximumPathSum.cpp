// Optimal Approach
#include <iostream>
#include <climits>
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
int maxSum = INT_MIN;
int Dfs(TreeNode* root)
{
    if (root == NULL) return 0;
    int leftGain = max(0, Dfs(root->left));
    int rightGain = max(0, Dfs(root->right));
    maxSum = max(maxSum, leftGain + rightGain + root->val);
    return root->val + max(leftGain, rightGain);
}
int maxPathSum(TreeNode* root)
{
    maxSum = INT_MIN;
    Dfs(root);
    return maxSum;
}
int main()
{
    TreeNode* root = new TreeNode(-10);
    root->left = new TreeNode(9);
    root->right = new TreeNode(20);
    root->right->left = new TreeNode(15);
    root->right->right = new TreeNode(7);
    cout << "Maximum Path Sum: " << maxPathSum(root);
    return 0;
}
// Time Complexity --> O(n)
// Space Complexity --> O(h)
// Optimal Approach
#include <iostream>
#include <vector>
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
void inorder(TreeNode* root, vector<int>& ans)
{
    if (!root) return;
    inorder(root->left, ans);
    ans.push_back(root->val);
    inorder(root->right, ans);
}
vector<int> inorder_Traversal(TreeNode* root)
{
    vector<int> ans;
    inorder(root, ans);
    return ans;
}
int main()
{
    TreeNode* root = new TreeNode(1);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(3);
    vector<int> result = inorder_Traversal(root);
    cout << "Inorder Traversal: ";
    for (int val : result)
    {
        cout << val << " ";
    }
    return 0;
}
// Time Complexity --> O(n)
// Space Complexity --> O(n)
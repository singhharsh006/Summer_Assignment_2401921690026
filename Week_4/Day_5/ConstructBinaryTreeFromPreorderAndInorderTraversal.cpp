// Optimal Approach
#include <iostream>
#include <vector>
#include <unordered_map>
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
unordered_map<int, int> mp;
int preIndex = 0;
TreeNode* build(vector<int>& preorder, int left, int right)
{
    if (left > right) return NULL;
    TreeNode* root = new TreeNode(preorder[preIndex++]);
    int inIndex = mp[root->val];
    root->left = build(preorder, left, inIndex - 1);
    root->right = build(preorder, inIndex + 1, right);
    return root;
}
TreeNode* build_Tree(vector<int>& preorder, vector<int>& inorder)
{
    mp.clear();
    preIndex = 0;
    for (int i = 0; i < inorder.size(); i++) mp[inorder[i]] = i;
    return build(preorder, 0, inorder.size() - 1);
}
void inorder_Traversal(TreeNode* root)
{
    if (root == NULL) return;
    inorder_Traversal(root->left);
    cout << root->val << " ";
    inorder_Traversal(root->right);
}
int main()
{
    int n;
    cout << "Enter number of Nodes: ";
    cin >> n;
    vector<int> preorder(n), inorder(n);
    cout << "Enter preorder traversal:\n";
    for (int i = 0; i < n; i++) cin >> preorder[i];
    cout << "Enter inorder traversal:\n";
    for (int i = 0; i < n; i++) cin >> inorder[i];
    TreeNode* root = build_Tree(preorder, inorder);
    cout << "Inorder Traversal of Constructed Tree: ";
    inorder_Traversal(root);
    return 0;
}
// Time Complexity --> O(n)
// Space Complexity --> O(n)
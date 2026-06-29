// Optimal Approach
#include <iostream>
#include <string>
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
void preorder(TreeNode* root, string &s)
{
    if (!root)
    {
        s += "N,";
        return;
    }
    s += to_string(root->val) + ",";
    preorder(root->left, s);
    preorder(root->right, s);
}
string serialize(TreeNode* root)
{
    string s;
    preorder(root, s);
    return s;
}
TreeNode* build(string &data, int &i)
{
    if (data[i] == 'N')
    {
        i += 2;
        return NULL;
    }
    string num;
    while (i < data.size() && data[i] != ',') num += data[i++];
    i++;
    TreeNode* root = new TreeNode(stoi(num));
    root->left = build(data, i);
    root->right = build(data, i);
    return root;
}
TreeNode* deserialize(string data)
{
    int i = 0;
    return build(data, i);
}
void inorder_Traversal(TreeNode* root)
{
    if (!root) return;
    inorder_Traversal(root->left);
    cout << root->val << " ";
    inorder_Traversal(root->right);
}
int main()
{
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(5);
    string data = serialize(root);
    cout << "Serialized Tree: " << data << endl;
    TreeNode* newRoot = deserialize(data);
    cout << "Inorder Traversal after Deserialization: ";
    inorder_Traversal(newRoot);
    return 0;
}
// Time Complexity --> O(n)
// Space Complexity --> O(n)
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int count = 0;
    int avg = 0;
    int sum = 0;
    int val = 0;
    int result = 0;
    int dfs(TreeNode* root){
        if (root == NULL)
        return 0;
    sum +=root->val;
    count++;

    dfs(root->left);
    dfs(root->right);
    avg = int(sum / count); 
    
    return avg;
 
    }
    int averageOfSubtree(TreeNode* root) {
    if( root == NULL)
    return result;

    count = 0;
    avg = 0;
    sum = 0;
    val = root->val;
    int ans = dfs(root);
    if( ans == val)
    result++;
    averageOfSubtree(root->left);
    averageOfSubtree(root->right);
    
    return result;
}
};
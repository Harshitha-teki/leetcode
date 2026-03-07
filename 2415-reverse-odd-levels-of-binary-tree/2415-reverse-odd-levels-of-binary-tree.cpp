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
    TreeNode* reverseOddLevels(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        bool reve=false;
        while(!q.empty()){
            int size= q.size();
            vector<TreeNode*>v(size);
            for(int i=0; i<size; i++){
                TreeNode* node = q.front();
                q.pop();
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
                if(reve){
                    v[i] = node;
                    if(i>=size/2)
                        swap(v[i]->val, v[size-i-1]->val);
                }
            }
            reve = !reve;
        }
        return root;
    }
};
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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> vec;
        pair<TreeNode*,int> p;
        int level = 0;
        queue<pair<TreeNode*,int>> q;
        if(root == NULL){
            return vec;
        }
        q.push(make_pair(root,level));
        int prev_level = 0;
        vector<int> v;
        while(!q.empty()){
            p = q.front();
            q.pop();
            if(prev_level != p.second){
                vec.push_back(v);
                v.clear();
            }
            if(p.first != NULL){
                v.insert(v.begin(),p.first->val);
            }
            
            if(p.first->right == NULL && p.first->left == NULL){
                prev_level = p.second;
                continue;
            }
                
            if(p.first->right != NULL)
                q.push(make_pair(p.first->right,p.second + 1));
            if(p.first->left != NULL)
                q.push(make_pair(p.first->left,p.second + 1));
            prev_level = p.second;
        }
        vec.push_back(v);
        reverse(vec.begin(),vec.end());
        return vec;
    }
};

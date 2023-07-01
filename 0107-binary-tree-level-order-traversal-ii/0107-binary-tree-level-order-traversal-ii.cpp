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
       queue<TreeNode *> q;
        vector<int> k;
        vector<vector<int>> ans;
        if(root == NULL)
        {
            return ans;
        }
        q.push(root);
        while(!q.empty())
        {
            int s = q.size();
            while(s--)
            {
                TreeNode *temp = q.front();
                q.pop();
                k.push_back(temp->val);
            
                if(temp->left != NULL)
                {
                    q.push(temp->left);
                }
                if(temp->right != NULL)
                {
                    q.push(temp->right);
                }
            }
            ans.push_back(k);
            k.clear();
        }
        reverse(ans.begin(),ans.end());
        return ans; 
    }
};
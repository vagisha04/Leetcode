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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode* > q;
        vector<int> k;
        vector<vector<int>> ans;
        if(root == NULL)
        {
            return ans ;
        }
        int count =0;
        q.push(root);
        while(!q.empty())
        {
            int i = q.size();
         count++;
            while(i--)
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
        if(count %2 ==0)
                {
                    reverse(k.begin(),k.end());
                }
            
            ans.push_back(k);
            k.clear();
    }
        return ans;      
    }
};
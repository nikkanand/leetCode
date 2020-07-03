/**Given a binary tree, return the bottom-up level order traversal of its nodes' values. (ie, from left to right, level by level from leaf to root).

For example:
Given binary tree [3,9,20,null,null,15,7],
    3
   / \
  9  20
    /  \
   15   7
return its bottom-up level order traversal as:
[
  [15,7],
  [9,20],
  [3]
]
*/

//Solution--------------------------------------
//Use BFS with recursion to find the level order and than reverse the vector


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
      vector<vector<int>> ans;
      levelOrderReverse(root,0,ans);
      reverse(ans.begin(),ans.end());
      return ans;
    }
    void levelOrderReverse(TreeNode* root,int dep,vector<vector<int>> &ans)
    {
        if(!root)
            return;
        while(ans.size() <= dep) 
            ans.push_back({});
        ans[dep].push_back(root->val);
        levelOrderReverse(root->left, dep + 1, ans);
        levelOrderReverse(root->right, dep + 1, ans);
    }
};

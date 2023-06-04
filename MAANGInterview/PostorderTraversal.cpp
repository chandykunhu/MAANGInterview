#include<vector>
#include "Common.cpp"
#include <stack>
using namespace std;


/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<int> postorderTraversal(TreeNode* root) {
    stack<TreeNode*> nodeStack;
    vector<int> result;
    //base case
    if (root == NULL)
        return result;
    nodeStack.push(root);
    while (!nodeStack.empty()) {
        TreeNode* node = nodeStack.top();
        result.push_back(node->val);
        nodeStack.pop();
        if (node->left)
            nodeStack.push(node->left);
        if (node->right)
            nodeStack.push(node->right);
    }
    reverse(result.begin(), result.end());
    return result;
}


//Need to check
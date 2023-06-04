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
vector<int> inorderTraversal(TreeNode* A) {
    stack<TreeNode*> S;
    TreeNode* cur = A;
    vector<int> res;
    while (cur != NULL) {
        S.push(cur);
        cur = cur->left;
    }
    while (!S.empty()) {
        TreeNode* t = S.top();
        res.push_back(t->val);
        S.pop();
        if (t->right != NULL) {
            cur = t->right;
            while (cur != NULL) {
                S.push(cur);
                cur = cur->left;
            }
        }
    }
    return res;

}

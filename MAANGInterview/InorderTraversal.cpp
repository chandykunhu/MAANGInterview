#include<vector>
#include <stack>

#include "MAANGInterview.h"

using namespace std;


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

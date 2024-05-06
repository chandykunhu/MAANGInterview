#include<vector>
#include <stack>

#include "MAANGInterview.h"

using namespace std;

vector<int> preorderTraversal(TreeNode* A) {

    vector<int> ret;

    // Base Case
    if (A == NULL)
        return ret;

    // Create an empty stack and push A to it
    stack<TreeNode*> nodeStack;
    nodeStack.push(A);

    /* Pop all items one by one. Do following for every popped item
       a) print it
       b) push its right child
       c) push its left child
    Note that right child is pushed first so that left is processed first */
    while (nodeStack.empty() == false) {
        // Pop the top item from stack and print it
        struct TreeNode* node = nodeStack.top();
        ret.push_back(node->val);
        nodeStack.pop();

        // Push right and left children of the popped node to stack
        if (node->right)
            nodeStack.push(node->right);
        if (node->left)
            nodeStack.push(node->left);
    }
    return ret;
}

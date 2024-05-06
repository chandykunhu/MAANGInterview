#pragma once

#include<vector>
#include <cstddef>
#include <iostream>
#include <stack>

using namespace std;


struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

//C/C++
void summation();

//Two Pointers
vector<int>sortColors(vector<int>& A);
vector<int> subArrayGivenSum(vector<int>& arr, int k);
vector<int> merge2SortedArray(const vector<int>& A, const vector<int>& B);

//TreeDataStructure
vector<int> inorderTraversal(TreeNode* A);
vector<int> preorderTraversal(TreeNode* A);
vector<int> postorderTraversal(TreeNode* root);

//DP
int maxProductSubarray(vector<int>& C);



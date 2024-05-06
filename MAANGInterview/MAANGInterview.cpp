#include <iostream>
#include <vector>

#include "MAANGInterview.h"

int main()
{
    ////C/C++
    ///*1.*/summation();


    ////Two Pointers
    //vector<int> A;
    //vector<int> B;
    //int k = 0;
    ///*1.*/sortColors(A);
    ///*2.*/subArrayGivenSum(A, k);
    ///*3.*/merge2SortedArray(A, B);



    ////TreeDataStructure
    //TreeNode* N = NULL;
    ///*1.*/inorderTraversal(N);
    ///*2.*/preorderTraversal(N);
    ///*3.*/postorderTraversal(N);

    //DP
    vector<int> C;
    int count;
    cout << "Enter count of values in Array";
    cin >> count;
    cout << "Enter values";
    for (int i = 0; i < count; i++)
    {
        cin >> C[i];
    }
    /*1.*/ maxProductSubarray(C);
}

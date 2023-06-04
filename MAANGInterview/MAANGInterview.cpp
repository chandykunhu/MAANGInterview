
#include <iostream>
#include <vector>
#include "Summation.cpp"
#include "SortByColor.cpp"
#include "SubArrayGivenSum.cpp"
#include "Merge2SortedArray.cpp"
#include "Common.cpp"
#include "InorderTraversal.cpp"
#include "PreorderTraversal.cpp"
#include "PostorderTraversal.cpp"

int main()
{
    //C/C++
    /*1.*/summation();


    //Two Pointers
    vector<int> A;
    vector<int> B;
    int k;
    /*1.*/sortColors(A);
    /*2.*/subArrayGivenSum(A, k);
    /*3.*/merge2SortedArray(A, B);



    //TreeDataStructure
    TreeNode* N = NULL;
    ///*1.*/inorderTraversal(N);
    /*2.*/preorderTraversal(N);
    /*3.*/postorderTraversal(N);
}

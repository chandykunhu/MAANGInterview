#include<vector>

using namespace std;


int maxProductSubarray(vector<int>& C) {

    int maxProduct = INT_MIN;
    vector<int> dpProduct = C;

    for (int i = 1; i < C.size(); i++)
    {
        dpProduct[i] = C[i - 1] * C[i - 2];
        maxProduct = max(dpProduct[i], maxProduct);
    }
    return maxProduct;
}
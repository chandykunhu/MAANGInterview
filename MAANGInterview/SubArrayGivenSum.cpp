#include<vector>
using namespace std;


vector<int> subArrayGivenSum(vector<int>& arr, int k) {

    int n = arr.size();
    int l = 0, r = 0;
    int sum = arr[l];
    while (r < n && l <= r) {
        if (sum == k) {
            // current window sum = k
            vector < int > ans;
            for (int i = l; i <= r; i++)
                ans.push_back(arr[i]);
            return ans;
        }
        else if (sum < k) {
            // current window sum < k
            r++;
            if (r < n) sum += arr[r];
        }
        else {
            // current window sum > k
            sum -= arr[l];
            l++;
            if (l > r && l < n - 1) {
                r++;
                sum += arr[r];
            }
        }
    }
    return { -1 };
}
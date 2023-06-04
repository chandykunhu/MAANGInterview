#include<vector>
using namespace std;

vector<int> merge2SortedArray(const vector<int>& A, const vector<int>& B) {

    vector < int > res;
    int i = 0; // points to the first element of A
    int j = 0; // points to the first element of B

    while (i < A.size() && j < B.size()) {
        if (A[i] <= B[j]) {
            res.push_back(A[i]);
            i++;
        }
        else {
            res.push_back(B[j]);
            j++;
        }
    }
    // if pointer 1 (i.e. i) has not reached the end
    while (i < A.size()) {
        res.push_back(A[i]);
        i++;
    }
    // if pointer 2 (i.e. j) has not reached the end 
    while (j < B.size()) {
        res.push_back(B[j]);
        j++;
    }
    return res;
}
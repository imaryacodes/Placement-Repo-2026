#include <bits/stdc++.h>
using namespace std;    

int longestSubarrayWithSumK(vector<int>& arr, long long k) {
    int n = arr.size();
    map<long long, int> prefixSumIndex;
    long long prefixSum = 0;
    int maxLen = 0;

    for (int i = 0; i < arr.size(); i++) {
        prefixSum += arr[i];

        if (prefixSum == k) {
            maxLen = max(maxLen, i + 1);
        }

        int requiredSum = prefixSum - k;
        if (prefixSumIndex.find(requiredSum) != prefixSumIndex.end()) {
            maxLen = max(maxLen, i - prefixSumIndex[requiredSum]);
        }
        if (prefixSumIndex.find(prefixSum) == prefixSumIndex.end()) {
            prefixSumIndex[prefixSum] = i;
        }
    }
    return maxLen;
}

int main() {
    vector<int> arr = {1, 2, 3, 2, 1, 1, 1, 1, 4, 2, 3};
    long long k = 5;
    cout << longestSubarrayWithSumK(arr, k) << endl; 
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int>& a, long long k) {
    int left = 0, right = 0, maxLen = 0;
    long long sum = 0;
    int n = a.size();

    while (right < n) {
        sum += a[right];

        while (left <= right && sum > k) {
            sum -= a[left];
            left++;
        }

        if (sum == k) {
            maxLen = max(maxLen, right - left + 1);
        }

        right++;
    }

    return maxLen;
}

int main() {
    vector<int> arr = {1, 2, 3, 2, 1, 1, 1, 1, 4, 2, 3};
    long long k = 5;

    cout << longestSubarray(arr, k) << endl;

    return 0;
}
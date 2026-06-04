#include <bits/stdc++.h>
using namespace std;

vector<int> rearrangeArray(vector<int>& nums) {
    int n = nums.size();

    vector<int> ans(n);

    int posIndex = 0; // even indices
    int negIndex = 1; // odd indices

    for (int i = 0; i < n; i++) {
        if (nums[i] > 0) {
            ans[posIndex] = nums[i];
            posIndex += 2;
        } else {
            ans[negIndex] = nums[i];
            negIndex += 2;
        }
    }

    return ans;
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> ans = rearrangeArray(nums);

    for (int x : ans) {
        cout << x << " ";
    }

    cout << endl;

    return 0;
}
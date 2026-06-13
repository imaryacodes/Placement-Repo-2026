#include <bits/stdc++.h>
using namespace std;

vector<int> leaders(vector<int>& nums) {
    vector<int> ans;
    int max_so_far = INT_MIN;
    for (int i = nums.size() - 1; i >= 0; i--) {
        if (nums[i] > max_so_far) {
            ans.push_back(nums[i]);
            max_so_far = nums[i];
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    vector<int> nums = {16, 17, 4, 3, 5, 2};
    vector<int> result = leaders(nums);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
} 
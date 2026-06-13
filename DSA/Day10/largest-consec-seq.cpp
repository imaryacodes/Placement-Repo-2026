#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int longestConsecutive(vector<int>& nums) {
    unordered_set<int> st(nums.begin(), nums.end());

    int ans = 0;

    for (int x : st) {
        if (!st.count(x - 1)) {  // start of a sequence
            int y = x;

            while (st.count(y))
                y++;

            ans = max(ans, y - x);
        }
    }

    return ans;
}

int main() {
    vector<int> nums = {100, 4, 200, 1, 3, 2};

    cout << "Longest Consecutive Subsequence Length = "
         << longestConsecutive(nums);

    return 0;
}
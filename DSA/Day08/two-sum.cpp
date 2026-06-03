#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& arr, int target) {
    unordered_map<int, int> mp;

    for (int i = 0; i < arr.size(); i++) {
        int need = target - arr[i];

        if (mp.find(need) != mp.end()) {
            return {mp[need], i};
        }

        mp[arr[i]] = i;
    }

    return {};
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    vector<int> ans = twoSum(arr, target);

    cout << ans[0] << " " << ans[1];

    return 0;
}
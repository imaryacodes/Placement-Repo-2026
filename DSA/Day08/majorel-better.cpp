#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& arr) {
    unordered_map<int, int> mp;

    for (auto it : arr) {
        mp[it]++;

        if (mp[it] > arr.size() / 2) {
            return it ;
        }
    }

    return -1;
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << majorityElement(arr);

    return 0;
}
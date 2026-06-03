#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& arr) {
    int count = 0;
    int candidate = 0;

    for (int x : arr) {

        if (count == 0) {
            candidate = x;
        }

        if (x == candidate) {
            count++;
        }
        else {
            count--;
        }
    }

    return candidate;
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
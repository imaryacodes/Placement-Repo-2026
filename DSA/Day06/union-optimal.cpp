#include <bits/stdc++.h>
using namespace std;

vector<int> sortedArray(vector<int> &a, vector<int> &b) {
    int n1 = a.size(), n2 = b.size();
    int i = 0, j = 0;

    vector<int> ans;

    while (i < n1 && j < n2) {
        if (a[i] <= b[j]) {
            if (ans.empty() || ans.back() != a[i]) {
                ans.push_back(a[i]);
            }
            i++;
        }
        else {
            if (ans.empty() || ans.back() != b[j]) {
                ans.push_back(b[j]);
            }
            j++;
        }
    }

    while (i < n1) {
        if (ans.empty() || ans.back() != a[i]) {
            ans.push_back(a[i]);
        }
        i++;
    }

    while (j < n2) {
        if (ans.empty() || ans.back() != b[j]) {
            ans.push_back(b[j]);
        }
        j++;
    }

    return ans;
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {3, 4, 5, 6, 7};

    vector<int> ans = sortedArray(a, b);

    for (int x : ans) {
        cout << x << " ";
    }
    return 0;
}
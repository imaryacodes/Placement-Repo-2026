#include <bits/stdc++.h>
using namespace std;

void rearrange(vector<int>& arr) {
    int n = arr.size();

    vector<int> pos, neg;

    for(int i = 0; i < n; i++) {
        if(arr[i] >= 0)
            pos.push_back(arr[i]);
        else
            neg.push_back(arr[i]);
    }

    if(pos.size() > neg.size()) {

        for(int i = 0; i < neg.size(); i++) {
            arr[2*i] = pos[i];
            arr[2*i + 1] = neg[i];
        }

        int j = neg.size() * 2;

        for(int i = neg.size(); i < pos.size(); i++) {
            arr[j++] = pos[i];
        }
    }
    else {

        for(int i = 0; i < pos.size(); i++) {
            arr[2*i] = pos[i];
            arr[2*i + 1] = neg[i];
        }

        int j = pos.size() * 2;

        for(int i = pos.size(); i < neg.size(); i++) {
            arr[j++] = neg[i];
        }
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    rearrange(arr);

    for(int x : arr) {
        cout << x << " ";
    }

    return 0;
}
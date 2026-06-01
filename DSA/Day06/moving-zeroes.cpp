#include <bits/stdc++.h>
using namespace std;

vector<int> moveZeroes(int n, vector<int> a) {
    
    int j = -1;
        for (int i = 0; i < n; i++) {
            if (a[i] == 0) {
                j = i;
                break;
            }
        }
        if (j == -1) {
            return a;
        }
        for (int i = j + 1; i < n; i++) {
            if (a[i] != 0) {
                swap(a[i], a[j]);
                j++;
            }
        }
        return a;
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> result = moveZeroes(n, a);
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
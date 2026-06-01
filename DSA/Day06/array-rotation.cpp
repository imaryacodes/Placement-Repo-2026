#include <bits/stdc++.h>
using namespace std;

void leftRotate(vector<int> &arr, int n, int d) {
    d = d % n; // Handle cases where d >= n

    vector<int> temp(d);
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }
    for (int i = n - d; i < n; i++)
    {
        arr[i] = temp[i - (n - d)];
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int d;
    cin >> d;
    leftRotate(arr, n, d);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int currSum = arr[0];
    int maxSum = arr[0];

    int start = 0, end = 0;
    int tempStart = 0;

    for(int i = 1; i < n; i++) {

        if(currSum + arr[i] < arr[i]) {
            currSum = arr[i];
            tempStart = i;     // start new subarray
        }
        else {
            currSum += arr[i]; // extend existing subarray
        }

        if(currSum > maxSum) {
            maxSum = currSum;
            start = tempStart;
            end = i;
        }
    }

    cout << "Maximum Sum = " << maxSum << "\n";

    cout << "Subarray: ";
    for(int i = start; i <= end; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
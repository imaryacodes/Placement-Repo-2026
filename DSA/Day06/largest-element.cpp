#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int> &arr)
{
    int largest = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    return largest;
}

int main()
{
    vector<int> arr = {5, 4, 1, 7, 9, 10, 3};
    cout << largestElement(arr) << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;        

int secondLargestElement(vector<int> &arr)
{
    int largest = arr[0];
    int secondLargest = -1;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }
    return secondLargest;
}

int main()
{
    vector<int> arr = {5, 4, 1, 7, 9, 10, 3};
    cout << secondLargestElement(arr) << endl;
    return 0;
}
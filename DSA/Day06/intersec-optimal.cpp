#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int> &arr1, vector<int> &arr2){
    vector<int> result;
    int i = 0, j = 0;
    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] == arr2[j])
        {
            if (result.empty() || result.back() != arr1[i])
            {
                result.push_back(arr1[i]);
            }
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return result;
}

int main()
{
    vector<int> arr1 = {1, 2, 2, 3, 4};
    vector<int> arr2 = {2, 2, 3, 5};
    vector<int> result = intersection(arr1, arr2);
    for (int num : result)
    {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}
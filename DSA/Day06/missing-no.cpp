#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int> &a, int N)
{
    int xor1 = 0, xor2 = 0;
    int n = N-1;
    for (int i = 0; i < n; i++)
    {
        xor2 = xor2 ^ a[i]; // XOR of all elements in the array
        xor1 = xor1 ^ (i + 1); // XOR of all numbers from 1 to n
    }
    xor1 = xor1 ^ N; // XOR with n+1 to include the last number
    return xor1 ^ xor2; // The difference will be the missing number
}

int main()
{
    int N;
    cout << "Enter the value of N: ";
    cin >> N;
    vector<int> a(N - 1);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < N - 1; i++)
    {
        cin >> a[i];
    }
    int missing = missingNumber(a, N);
    cout << "The missing number is: " << missing << endl;
    return 0;
}
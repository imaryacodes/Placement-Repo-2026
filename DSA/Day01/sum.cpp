#include<iostream>
using namespace std;

int sum(int num1, int num2) {
    int num3 = num1 + num2;
    return num3;
}
int main() {
    int num1, num2;
    cin >> num1 >> num2;
    int res = sum(num1, num2); // the two numbers are stored in num1 and num2 respectively, and then called by the function sum. Result is stored in res.
    cout << res;

    return 0;
} 
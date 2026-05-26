#include <iostream>
using namespace std;

// Pass by value - makes a copy and performs operations on the copy itself
// void doSomething(int num) {
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
//     num += 5;
//     cout << num << endl;
// }

// int main() {
//     int num = 10;
//     doSomething(num);
//     cout << num << endl; // num is still 10 because we passed it by value, which means a copy of num was created in the function doSomething and any changes made to num inside the function do not affect the original num in main.
//     return 0;}

// Pass by reference - makes a reference to the original variable by taking its address and performs operations on  it.
void doSomething(string &s) { // num is a reference to the original variable, so any changes made to num inside the function will affect the original num in main.
    s[0] = 't';
    cout << s << endl;
}
int main() {
    string s = "raj";
    doSomething(s);
    cout << s << endl;
    return 0;
}
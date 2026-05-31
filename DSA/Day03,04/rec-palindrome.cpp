#include <iostream>
using namespace std;

void f(int i, string s, int n) {
    if(i >= n/2) {
        cout << "Palindrome";
        return;
    }

    if(s[i] != s[n-i-1]) {
        cout << "Not a palindrome";
        return;
    }
    f(i+1, s, n);
}

int main() {

    string s;
    cin >> s;

    int n = s.length();
     
    f(0, s, n);

    return 0;
}
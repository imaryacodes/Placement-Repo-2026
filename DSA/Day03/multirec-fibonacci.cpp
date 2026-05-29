#include <iostream>
using namespace std;

int f(int n){
    if(n <= 1) return n;
    int abc = f(n-1);
    int def = f(n-2);
    return abc + def;
}

int main() {
    int n;
    cin >> n;
    cout << f(n);
    return 0;
}
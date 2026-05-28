#include <iostream>
using namespace std;

void print(int n){
    for(int i = 0 ; i < n; i++) {
        for(int j = 1; j < n-i+1; j++) {
            cout << " ";
        }
        for(int j = 0; j < (2*i+1); j++) { 
            cout << "*";
        }
        for(int j = 1; j < n-i+1; j++) {
            cout << " ";
        }
        cout << endl;
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i+1; j++) {
            cout << " ";
        }
        for(int j = 0; j < 2*n - (2*i + 1); j++) {
            cout << "*";
        }
        for(int j = 0; j < i+1; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

int main() {
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        print(n);
    }
    return 0; 
}
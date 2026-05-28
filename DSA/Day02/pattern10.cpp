#include <iostream>
using namespace std;

void print(int n){
    for(int i = 1 ; i <= 2*n-1; i++) {
        int row = i;
        if(row>n) {
            row = 2*n-row;
        }
        for(int j = 1; j <= row; j++) {
            cout << "*";
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
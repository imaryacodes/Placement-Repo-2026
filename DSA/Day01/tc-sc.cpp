#include <iostream>
using namespace std;

int main() {
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << "Hello World" << endl;
        }
    }
}


// for every value of i, j runs for m times 
// total iterations = n * m
// time complexity = O(n * m)
// or if j runs for n times, 
// then time complexity = O(n * n) = O(n^2)


int main() {
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << "Hello World" << endl;
        }
    }
}

// for i = 0, j runs for 1 time
// for i = 1, j runs for 2 times
// so the time complexity is O(1 + 2 + 3 + ... + n) = O(n * (n + 1) / 2) = O(n^2)
// time complexity in actual = [n(n+1)]/2 = O(n^2)

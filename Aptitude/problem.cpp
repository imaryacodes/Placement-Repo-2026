#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Check even or odd
    if(n % 2 == 0)
        cout << "Even" << endl;
    else
        cout << "Odd" << endl;

    // Sum of digits
    int sum = 0;
    while(n > 0) {
        sum += n % 10;
        n = n / 10;
    }

    cout << sum;

    return 0;
}
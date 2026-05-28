#include <iostream>;
using namespace std;

void print() {
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    print();
    return 0;
}
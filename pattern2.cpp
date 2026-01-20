#include <iostream>
using namespace std;

int main() {
    for(int i = 1; i <= 5; i++) {
        for(int space = 5; space > i; space--) {
            cout << " ";
        }
        for(int star = 1; star <= (2*i - 1); star++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

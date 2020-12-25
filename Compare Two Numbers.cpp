/**
 * Program to Compare Two Numbers
 */

#include <iostream>
using namespace std;

int main() {
    double n1, n2;

    cout << "Enter First Number: ";
    cin >> n1;
    cout << "Enter Second Number: ";
    cin >> n2;

    if (n1 > n2) {
        cout << "First Number is Greater than the Second Number." << endl;
    } else if (n1 == n2) {
        cout << "First Number is equal to the Second Number." << endl;
    } else {
        cout << "First Number is lesser than the Second Number." << endl;
    }

    return 0;
}

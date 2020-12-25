/**
 * Program to show the use of Scope Resolution Operator.
 */

#include <iostream>
using namespace std;

int k = 12;

int main() {
    int k = 17;

    cout << "K = " << k << endl;
    cout << "::K = " << ::k << endl;

    return 0;
}

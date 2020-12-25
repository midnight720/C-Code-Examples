/**
 * Swap Two Integers
 */

#include <iostream>
using namespace std;

int main() {
    int n1, n2, tmp;

    n1 = 0;
    n2 = 1;

    cout << "n1 = " << n1 << endl
         << "n2 = " << n2 << endl;

    tmp = n1;
    n1 = n2;
    n2 = tmp;

    cout << "n1 = " << n1 << endl
         << "n2 = " << n2 << endl;
         
    return 0;
}

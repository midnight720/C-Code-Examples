/**
 * Program to show the use of inline and friend keywords.
 */

#include <iostream>
using namespace std;

int divide(int x, int y);

class P {

    friend int divide(int x, int y) {
        if (y != 0)
            return x/y;
        return 0;
    }

};

inline int mul(int x, int y) {
    return x*y;
}

int main() {
    cout << "12 * 23 = " << mul(12, 23) << endl
         << "12 / 4 = " << divide(12, 4) << endl;
    return 0;
}

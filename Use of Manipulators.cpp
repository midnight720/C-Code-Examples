/**
 * Program to show the use of manipulators.
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << setw(12) << "Maths: " << 90 << endl
         << setw(12) << "Physics: " << 77 << endl
         << setw(12) << "Chemistry: " << 69 << endl;
    return 0;
}

/**
 * Program to print "Well Done!" on the screen 'n' times without quotes.
 */

#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter n: ";
    cin >> n;

    for (int i=0; i<n; i++) {
        cout << "Well Done!" << endl;
    }
    
    return 0;
}

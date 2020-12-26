/**
 * Program to show function overloading
 */

#include <iostream>
using namespace std;

double volume(double side) {
    return side*side*side;
}

double volume(double len, double wid, double hig) {
    return len*wid*hig;
}

int main() {
    cout << "Volume of Cube of Side 3 is " << volume(3) << endl
         << "Volume of Cuboid of Dimensions 3,4,5 is " << volume(3,4,5) << endl;
    return 0;
}

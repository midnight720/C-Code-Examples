/**
 * Program to inconvert between Kelvin, Celcius and Fahrenheit Units of Temperature
 */

#include <iostream>
using namespace std;

class TConv {

public:

    double C2K(double t)    { return t + 273; }
    double K2C(double t)    { return t - 273; }
    double C2F(double t)    { return (t * 9 / 5) + 32; }
    double F2C(double t)    { return (t - 32) /9 * 5; }
    double F2K(double t)    { return C2K(F2C(t)); }
    double K2F(double t)    { return C2F(K2C(t)); }

};

void wrongOption() {
    cout << "Wrong Option" << endl;
    exit(0);
}

int main() {
    int n;
    double t, rt;

    TConv tc;

    cout << "Enter Temp: ";
    cin >> t;

    cout << "\n1. Celcius to Kelvin\n"
         << "2. Kelvin to Celcius\n"
         << "3. Celcius to Fahrenheit\n"
         << "4. Fahrenheit to Celcius\n"
         << "5. Fahrenheit to Kelvin\n"
         << "6. Kelvin to Fahrenheit\n"
         << "Enter Choice: ";
    cin >> n;

    switch(n) {
        case 1: rt = tc.C2K(t); break;
        case 2: rt = tc.K2C(t); break;
        case 3: rt = tc.C2F(t); break;
        case 4: rt = tc.F2C(t); break;
        case 5: rt = tc.F2K(t); break;
        case 6: rt = tc.K2F(t); break;
        default: wrongOption();
    }

    cout << "Resultant Temperature: " << rt << endl;

    return 0;
}

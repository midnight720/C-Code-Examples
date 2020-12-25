/**
 * Program to implement trigonometric identities from scratch.
 */

#include <iostream>
using namespace std;

#define ACCURACY 16

// Return X raised to power Y.
float pow(float x, int y) {
    if (y < 0) {
        x = 1/x;
        y = -y;
    }

    float r = 1;
    for (int i=0; i<y; i++) {
        r *= x;
    }
    return r;
}

// Returns the factorial of x.
float factorial(int x) {
    float r = 1;
    for (int i=2; i<=x; i++) {
        r *= i;
    }
    return r;
}

float sin(float x) {
    float r = x;
    int t;
    for (int i=2; i<=ACCURACY; i++) {
        t = (2*i)-1;
        r += pow(-1, i-1) * pow(x, t) / factorial(t);
    }
    return r;
}

float cos(float x) {
    float r = 1;
    int t;
    for (int i=2; i<=ACCURACY; i++) {
        t = (i-1)*2;
        r += pow(-1, i-1) * pow(x, t) / factorial(t);
    }
    return r;
}

float tan(float x) {
    return sin(x)/cos(x);
}

float cot(float x) {
    return cos(x)/sin(x);
}

float sec(float x) {
    return 1/cos(x);
}

float cosec(float x) {
    return 1/sin(x);
}

void wrongOption() {
    cout << "Wrong Option" << endl;
    exit(0);
}

int main() {
    float x;

    cout << "Enter Value (in Radians): ";
    cin >> x;

    cout << "\n1. Sine\n"
         << "2. Cosine\n"
         << "3. Tangent\n"
         << "4. Cotangent\n"
         << "5. Secant\n"
         << "6. Cosecant\n"
         << "Enter Choice: ";

    int c;
    cin >> c;

    float rt;

    switch(c) {
        case 1: rt = sin(x); break;
        case 2: rt = cos(x); break;
        case 3: rt = tan(x); break;
        case 4: rt = cot(x); break;
        case 5: rt = sec(x); break;
        case 6: rt = cosec(x); break;
        default: wrongOption();
    }

    cout << "Result: " << rt << endl;

    return 0;
}

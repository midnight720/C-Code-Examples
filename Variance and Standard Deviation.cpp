/**
 * Program to calculate mean, variance and standard deviation.
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    double* ar =  new double(n);
    double t;

    for (int i=0; i<n; i++) {
        cout << "Enter the value of element " << i << ": ";
        cin >> t;
        ar[i] = t;
    }

    double sum = 0;
    for (int i=0; i<n; i++) {
        sum += ar[i];
    }

    cout << "Sum = " << sum << endl;

    double mean = sum / double(n);
    cout << "Mean = " << mean << endl;

    double variance = 0;

    for (int i=0; i<n; i++) {
        t = (ar[i] - mean);
        variance += t*t;
    }

    variance /= double(n);
    cout << "Variance = " << variance << endl;

    double std_dev = sqrt(variance);
    cout << "Standard Deviation = " << std_dev << endl;

    delete [] ar;

    return 0;
}

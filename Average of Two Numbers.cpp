/**
 * Program to Input Two Numbers and Print their Sum as well as their Average.
 */

#include <iostream>
using namespace std;

int main() {
    float n1, n2, sum, avg;

    cout << "Enter Two Numbers: ";
    cin >> n1;
    cin >> n2;

    sum = n1 + n2;
    cout << "Sum = " << sum << endl;

    avg = sum / 2;
    cout << "Avg = " << avg << endl;
    
    return 0;
}

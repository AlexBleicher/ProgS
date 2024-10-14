#include <iostream>
#include "newton_sqrtAlgo.h"
using namespace std;

int main() {
    double number;
    cout << "Enter the number to calculate the square root from:";
    cin >> number;

    double first = number;
    double latest = number;
    int i = 1;
    while ((latest*latest-first)>0.0001 && i<=1000) {
        latest = newton_sqrt(latest, first);
        i++;
    }
    cout << "The square root of " << number << " is (approximately): " << latest << endl;
    return 0;
}

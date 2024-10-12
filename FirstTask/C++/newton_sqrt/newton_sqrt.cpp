#include <iostream>

using namespace std;

double newton_sqrt(double number, double first) {
    if (number < 0 || first < 0) {
        std::cerr << "Error in input: Negative numbers not possible" << std::endl;
    }

    return (0.5 * (number + first / number));
}

int main2() {
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

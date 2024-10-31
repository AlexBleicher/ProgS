#include "newton_sqrtAlgo.h"

#include <iostream>

double newton_sqrt(double number, double first) {
    if (number < 0 || first < 0) {
        std::cerr << "Error in input: Negative numbers not possible" << std::endl;
    }

    return (0.5 * (number + first / number));
}

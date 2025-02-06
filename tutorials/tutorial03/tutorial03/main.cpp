#include <iostream>
#include <cmath>
#include <cassert>

double findHypotenuse(double a, double b) {
    double hypotenuse = std::sqrt(a * a + b * b);
    assert(hypotenuse > 0 && "Hypotenuse must be positive");
    return hypotenuse;
}

int main() {
    double x = 0, y = 0;
    std::cout << "Hypotenuse: " << findHypotenuse(x, y) << '\n';
    return 0;
}


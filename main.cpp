#include <iostream>
#include "complex.cpp"

int main() {
    Complex z;
    z += Complex(8.0);
    std::cout << z << std::endl;
    testParse("{8.9,9}");
    testParse("{8.9, 9}");
    testParse("{8.9,9}");
    return 0;
}

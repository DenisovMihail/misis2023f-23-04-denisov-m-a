#include "complex.h"

Complex::Complex() {}

Complex::Complex(const double real) : Complex(real, 0.0) {}

Complex::Complex(const double real, const double imaginary) : re(real), im(imaginary) {}

bool Complex::operator==(const Complex& rhs) const {
    return (re == rhs.re) && (im == rhs.im);
}

bool Complex::operator!=(const Complex& rhs) const {
    return !operator==(rhs);
}

Complex& Complex::operator+=(const Complex& rhs) {
    re += rhs.re;
    im += rhs.im;
    return *this;
}

Complex& Complex::operator+=(const double rhs) {
    return operator+=(Complex(rhs));
}

std::ostream& operator<<(std::ostream& ostrm, const Complex& rhs) {
    return rhs.writeTo(ostrm);
}

std::istream& operator>>(std::istream& istrm, Complex& rhs) {
    return rhs.readFrom(istrm);
}

bool testParse(const std::string& str) {
    using namespace std;
    istringstream istrm(str);
    Complex z;
    istrm >> z;
    if (istrm.good()) {
        cout << "Read success: " << str << " -> " << z << endl;
    } else {
        cout << "Read error : " << str << " -> " << z << endl;
    }
    return istrm.good();
}

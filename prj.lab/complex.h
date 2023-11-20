#pragma once

#include <iostream>

struct Complex {
    Complex();
    explicit Complex(const double real);
    Complex(const double real, const double imaginary);
    bool operator==(const Complex& rhs) const;
    bool operator!=(const Complex& rhs) const;
    Complex& operator+=(const Complex& rhs);
    Complex& operator+=(const double rhs);
    double re{ 0.0 };
    double im{ 0.0 };
    static const char leftBrace{ '{' };
    static const char separator{ ',' };
    static const char rightBrace{ '}' };
};

Complex operator+(const Complex& lhs, const Complex& rhs);
Complex operator-(const Complex& lhs, const Complex& rhs);

std::ostream& operator<<(std::ostream& ostrm, const Complex& rhs);
std::istream& operator>>(std::istream& istrm, Complex& rhs);

bool testParse(const std::string& str);

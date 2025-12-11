#ifndef MYSTATICMATHLIB_H
#define MYSTATICMATHLIB_H

namespace MathLib {
    struct Complex {
        double real;
        double imag;
    };

    Complex add(const Complex& a, const Complex& b);
    Complex subtract(const Complex& a, const Complex& b);
    Complex multiply(const Complex& a, const Complex& b);
    double modulus(const Complex& c);
    void printComplex(const Complex& c);
}

#endif
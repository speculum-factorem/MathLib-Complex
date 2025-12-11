#include "mylib.h"
#include <iostream>
#include <cmath>

namespace MathLib {
    Complex add(const Complex& a, const Complex& b) {
        return { a.real + b.real, a.imag + b.imag };
    }

    Complex subtract(const Complex& a, const Complex& b) {
        return { a.real - b.real, a.imag - b.imag };
    }

    Complex multiply(const Complex& a, const Complex& b) {
        double real = a.real * b.real - a.imag * b.imag;
        double imag = a.real * b.imag + a.imag * b.real;
        return { real, imag };
    }

    double modulus(const Complex& c) {
        return sqrt(c.real * c.real + c.imag * c.imag);
    }

    void printComplex(const Complex& c) {
        std::cout << c.real << " + " << c.imag << "i" << std::endl;
    }
}
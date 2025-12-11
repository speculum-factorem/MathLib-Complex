#include "dynamiclib.h"
#include <iostream>

namespace MathLib {
    ComplexClass::ComplexClass(double r, double i) : real(r), imag(i) {}

    ComplexClass ComplexClass::add(const ComplexClass& other) const {
        return ComplexClass(real + other.real, imag + other.imag);
    }

    ComplexClass ComplexClass::subtract(const ComplexClass& other) const {
        return ComplexClass(real - other.real, imag - other.imag);
    }

    void ComplexClass::print() const {
        std::cout << real << " + " << imag << "i" << std::endl;
    }
}
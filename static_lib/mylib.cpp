#include "mylib.h"
#include <iostream>
#include <cmath>
#include <stdexcept>

namespace MathLib {
    // Существующие функции
    Complex add(const Complex& a, const Complex& b) {
        // Более эффективная версия с локальными переменными
        double real_sum = a.real + b.real;
        double imag_sum = a.imag + b.imag;
        return { real_sum, imag_sum };
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
    
    // НОВЫЕ ФУНКЦИИ
    Complex divide(const Complex& a, const Complex& b) {
        double denominator = b.real * b.real + b.imag * b.imag;
        if (denominator == 0) {
            throw std::runtime_error("Division by zero in complex numbers");
        }
        double real = (a.real * b.real + a.imag * b.imag) / denominator;
        double imag = (a.imag * b.real - a.real * b.imag) / denominator;
        return { real, imag };
    }
    
    double argument(const Complex& c) {
        if (c.real == 0 && c.imag == 0) {
            return 0; // аргумент нуля не определен, возвращаем 0
        }
        return atan2(c.imag, c.real);
    }
    
    Complex conjugate(const Complex& c) {
        return { c.real, -c.imag };
    }
    
    Complex power(const Complex& c, int n) {
        if (n == 0) {
            return { 1, 0 };
        }
        
        Complex result = c;
        for (int i = 1; i < n; i++) {
            result = multiply(result, c);
        }
        return result;
    }
}
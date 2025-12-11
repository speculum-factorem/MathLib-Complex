#ifndef MYSTATICMATHLIB_H
#define MYSTATICMATHLIB_H

namespace MathLib {
    struct Complex {
        double real;
        double imag;
    };

    // Существующие функции
    Complex add(const Complex& a, const Complex& b);
    Complex subtract(const Complex& a, const Complex& b);
    Complex multiply(const Complex& a, const Complex& b);
    double modulus(const Complex& c);
    void printComplex(const Complex& c);
    
    // НОВЫЕ ФУНКЦИИ для ветки static-library
    Complex divide(const Complex& a, const Complex& b);
    double argument(const Complex& c);  // аргумент (угол) комплексного числа
    Complex conjugate(const Complex& c); // комплексно-сопряженное число
    Complex power(const Complex& c, int n); // возведение в степень
}

#endif
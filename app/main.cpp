#include <iostream>
#include "mylib.h"          // статическая библиотека
#include "dynamiclib.h"     // динамическая библиотека

int main() {
    using namespace MathLib;

    // Использование статической библиотеки
    Complex a = { 3.0, 4.0 };
    Complex b = { 1.0, 2.0 };

    Complex sum = add(a, b);
    Complex diff = subtract(a, b);
    Complex prod = multiply(a, b);
    double mod = modulus(a);

    std::cout << "Static library results:" << std::endl;
    std::cout << "Sum: "; printComplex(sum);
    std::cout << "Difference: "; printComplex(diff);
    std::cout << "Product: "; printComplex(prod);
    std::cout << "Modulus of a: " << mod << std::endl;

    // Использование динамической библиотеки
    ComplexClass dynA(3.0, 4.0);
    ComplexClass dynB(1.0, 2.0);

    ComplexClass dynSum = dynA.add(dynB);
    ComplexClass dynDiff = dynA.subtract(dynB);

    std::cout << "\nDynamic library results:" << std::endl;
    std::cout << "Sum: "; dynSum.print();
    std::cout << "Difference: "; dynDiff.print();

    return 0;
}
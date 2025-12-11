#ifndef MYDYNAMICMATHLIB_H
#define MYDYNAMICMATHLIB_H

#ifdef _WIN32
    #ifdef MYDYNAMICMATHLIB_EXPORTS
        #define MATH_API __declspec(dllexport)
    #else
        #define MATH_API __declspec(dllimport)
    #endif
#else
    #define MATH_API
#endif

namespace MathLib {
    class MATH_API ComplexClass {
    private:
        double real;
        double imag;
    public:
        ComplexClass(double r, double i);
        ComplexClass add(const ComplexClass& other) const;
        ComplexClass subtract(const ComplexClass& other) const;
        void print() const;
    };
}

#endif
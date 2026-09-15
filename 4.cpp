#include <iostream>
using namespace std;

class Complex {
    float real, imag;

public:
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    Complex add(Complex c) {
        return Complex(real + c.real, imag + c.imag);
    }

    Complex subtract(Complex c) {
        return Complex(real - c.real, imag - c.imag);
    }

    Complex multiply(Complex c) {
        return Complex(
            real * c.real - imag * c.imag,
            real * c.imag + imag * c.real
        );
    }

    Complex divide(Complex c) {
        float denom = c.real * c.real + c.imag * c.imag;

        float r = (real * c.real + imag * c.imag) / denom;
        float i = (imag * c.real - real * c.imag) / denom;

        return Complex(r, i);
    }

    void display() {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
};

int main() {
    Complex c1(4, 5), c2(2, -3);

    cout << "Addition: ";
    c1.add(c2).display();

    cout << "Subtraction: ";
    c1.subtract(c2).display();

    cout << "Multiplication: ";
    c1.multiply(c2).display();

    cout << "Division: ";
    c1.divide(c2).display();

    return 0;
}
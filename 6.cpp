#include <iostream>
using namespace std;

class complex
{
    int real, img;  // Real and imaginary parts

public:
    // Function to accept the complex number
    void accept(int r, int i)
    {
        real = r;
        img = i;
    }

    // Function to display the complex number
    void display()
    {
        cout << "The complex number is: ";

        if(img > 0)
            cout << real << " + " << img << "i" << endl;
        else
            cout << real << img << "i" << endl;
    }

    // Overload + operator for addition
    complex operator+(complex c)
    {
        complex add;

        add.real = real + c.real;
        add.img = img + c.img;

        return add;
    }

    // Overload - operator for subtraction
    complex operator-(complex c)
    {
        complex subtract;

        subtract.real = real - c.real;
        subtract.img = img - c.img;

        return subtract;
    }

    // Overload * operator for multiplication
    complex operator*(complex c)
    {
        complex multiply;

        multiply.real = (real * c.real) - (img * c.img);
        multiply.img = (real * c.img) + (img * c.real);

        return multiply;
    }

    // Overload / operator for division
    complex operator/(complex c)
    {
        complex result;

        // Calculate denominator
        int denominator = (c.real * c.real) + (c.img * c.img);

        result.real = ((real * c.real) + (img * c.img)) / denominator;
        result.img = ((img * c.real) - (real * c.img)) / denominator;

        return result;
    }
};

int main()
{
    complex c1, c2, c3;

    // Assign values to complex numbers
    c1.accept(6, 2);
    c2.accept(5, 6);

    c1.display();
    c2.display();

    // Addition using overloaded + operator
    c3 = c1 + c2;
    cout << "Addition:\n";
    c3.display();

    // Subtraction using overloaded - operator
    c3 = c1 - c2;
    cout << "Subtraction:\n";
    c3.display();

    // Multiplication using overloaded * operator
    c3 = c1 * c2;
    cout << "Multiplication:\n";
    c3.display();

    // Division using overloaded / operator
    c3 = c1 / c2;
    cout << "Division:\n";
    c3.display();

    return 0; 
}

#include <iostream>
using namespace std;

class Operation
{
private:
    int a, b;

public:
    int add(int a, int b);
    int add(int a, int b, int c);
    float add(float a, float b);
};

int Operation::add(int a, int b)
{
    return a + b;
}

int Operation::add(int a, int b, int c)
{
    return a + b + c;
}

float Operation::add(float a, float b)
{
    return a + b;
}


int main()
{
    Operation O;
    cout << "Addition of two numbers: " << O.add(10, 20) << endl;
    cout << "Addition of three numbers: " << O.add(10, 20, 30) << endl;
    cout << "Addition of float numbers: " << O.add(2.5f, 3.6f) << endl;
}

#include <iostream>
#include <cstring>
using namespace std;

class String
{
    char *str;  // Pointer to store the string

public:
    // Default constructor
    String()
    {
        str = new char[1];
        str[0] = '\0';
    }

    // Parameterized constructor
    String(const char *s)
    {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    // Destructor to free dynamically allocated memory
    ~String()
    {
        delete[] str;
    }

    // Function to accept a string from the user
    void accept()
    {
        char temp[100];

        cout << "Enter a string: ";
        cin >> temp;

        delete[] str;  // Delete previous memory

        str = new char[strlen(temp) + 1];
        strcpy(str, temp);
    }

    // Function to display the string
    void display()
    {
        cout << "String: " << str << endl;
    }
};

int main()
{
    String s1;  // Calls default constructor

    s1.accept();
    s1.display();

    String s2("Hello");  // Calls parameterized constructor
    s2.display();

    return 0; 
}

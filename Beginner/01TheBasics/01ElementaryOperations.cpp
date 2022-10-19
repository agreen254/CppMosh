#include <iostream>

int main() {
    const double pi = 3.14159;
    int dick_size = 100;
    double sales = 9.99;
    int where_am_i = 0;
    int a = 1;
    int b = 2;
    int temp = b;
    
    b = a;
    a = temp;

    // std::cout << "Hello, World!"; // A statement. Always terminate statements with a semicolon.
    // std::cout << dick_size;
    // std::cout << where_am_i;
    std::cout << a;
    std::cout << b;

     
    /*
    Naming Conventions:
    Snake Case:         int my_variable_name
    Pascal Case:        int MyVariableName
    Camel Case:         int myVariableName
    Hungarian Notation: int iMyVariableName

    Camel for vars/constants, Pascal for classes
    */
    int x = 10;
    int y = 3;
    int z; 
    z = x + y; // x and y are operands, + is an operator
    z = x - y;
    z = x / y; // returns int by default, both z and either x or y must be a double to compile
    z = x % y;
    z = x * y;
    int q = x++; // q will equal 10, x will be 11
    int p = ++x; // both p and x will be 12
    x++;
    ++x;
    x--;

    std::cout << z;
    return 0;
}
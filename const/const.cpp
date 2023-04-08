#include <iostream>

int main(){
    // The const keyword specifies that variable's value is cosntant
    // tells the compiler to prevent anything from modifying it 
    // (read only)

    double pi = 3.14159;
    pi = 420.69;
    double radius = 10;
    double circumference = 2 * pi * radius;


    const double pi = 3.14159;
    pi = 420.69; // we cannot change any value taht's a constant
    double radius = 10;
    double circumference = 2 * pi * radius;

    std:: cout << circumference << "cm";
    return 0;
}
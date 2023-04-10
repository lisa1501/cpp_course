#include <iostream>

int main(){
    double x = 3;
    double y = 4;
    double a = 3.14;
    double b = 3.99;
    double z;

    // z = std::max(x,y);
    // z = std::min(x,y);

    // z = pow(2,3);
    // z = sqrt(9);
    // z = abs(-3);

    // z = round(a);
    // z = ceil(a);
    z = floor(x);

    std::cout << z;
    return 0;
}
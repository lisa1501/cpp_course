#include <iostream>

int main(){
    // array = a data structure than can hold multiple values
    //          values are accessed by an index number
    //          "kind of like variable that holds multiple values"

    std::string cars[] = {"Corvette", "Mustang", "Camry"};

    cars[0] = "Camaro";

    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';

    return 0;
}
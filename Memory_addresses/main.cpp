#include <iostream>

int main(){
    //memorty address = a location in memory where data is stored
    // a memory address can accessed with & (address-of operator)

    std::string name ="Lisa";
    int age = 21;
    bool student = true;

    std::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &student << '\n';

    return 0;

}
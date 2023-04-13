#include <iostream>

int main(){
    // ternary operator ?: = replacement to if/else statement
    // condition ? expression1 : expression2

    // int grade = 75;
    // grade >= 60 ? std::cerr << "You Pass!" : std::cerr << "You Fail!";

    int number = 8;
    number % 2 == 1 ? std::cout << "ODD" : std::cout << "EVEN";
    
    
    return 0;
}
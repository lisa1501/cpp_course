#include <iostream>

int main(){

    // && = check if two conditions are true
    // || = check if at least one of two conditions is true
    // !  = reverse the logical state of its operands

    int temp;
    std::cout << "Enter the temprature: ";
    std::cin >> temp;

    if(temp > 0 && temp < 30){
        std::cout << "The temprature is good!";
    }
    else{
        std::cout << "The temprature is bad!";
    }
    return 0;
}
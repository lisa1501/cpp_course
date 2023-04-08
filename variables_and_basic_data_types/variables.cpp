#include <iostream>

int main(){
    // integer whole number
    int x; //declaration
    x = 5; //assignment
    int y = 6;
    int sum = x + y;

    // std::cout << x << '\n';
    // std::cout << y << '\n';
    // std::cout << sum << '\n';


    // double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    // std::cout << price << '\n';
    // std::cout << gpa << '\n';
    // std::cout << temperature << '\n';

    // Single character , single quotes
    char grade ='A';
    char initial ='BC'; //warning: char only can store single character, output last character
    char dollarSign = '$'; 

    // std::cout << grade << '\n';
    // std::cout << initial << '\n';
    // std::cout << dollarSign << '\n';

    // boolean (true or false)
    bool student = false;
    bool power = true;
    bool forSale = true;

    //  string (objects that represents a sequence of text), double quotes
    std::string name = "Halisa";
    std::string food = "Pizza";
    std::string day = "Sunday";

    std::cout <<"Hello " << name<<std::endl;
    std::cout <<"I like to eat " << food <<std::endl;

    return 0;
}
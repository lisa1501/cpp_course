#include <iostream>

void happyBirthday(std::string name,int age);

int main(){
    // function = a block of reusalbe code 

    std::string name = "Bro";
    int age = 21;
    
    happyBirthday(name,age);

    return 0;
}
void happyBirthday(std::string name, int age){
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "Happy Birthday dear " << name << '\n';
    std::cout << "Happy Birthday to " << name << '\n';
    std::cout << "You are " << age << " years old!\n";

}
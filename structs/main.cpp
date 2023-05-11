#include <iostream>

struct student
{
    std:: string name;
    double gpa;
    bool enrolled = true;
};


int main(){
    // struct = A structure that group related variables under on name
    //          structs can contain many different data types (string , int, double, bool,etc)
    //          variables in a struct are know as "members"
    //          members can be access with . "Class Members Access Operator"

    student student1;
    student1.name = "Hello World";
    student1.gpa = 3.2;



    student student2;
    student2.name = "Lisa.S";
    student2.gpa = 3.5;
    

    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';

    std::cout << student2.name << '\n';
    std::cout << student2.gpa << '\n';
    std::cout << student2.enrolled << '\n';

    return 0;
}
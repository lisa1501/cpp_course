#include <iostream>

int main(){
    // sizeOf() = determines the size in bytes of a variable,
    //            data type, class, objects, etc.

    double gpa = 2.5;
    std::string name = "Lisa";
    char grade = 'F';
    bool student = true;
    char grades[] = {'A', 'B', 'C', 'D', 'E'};
    std::string students[] ={"Heidi", "Hena", "Whit", "Tammy"};

    std:: cout << sizeof(gpa) << " bytes\n";
    std:: cout << sizeof(name) << " bytes\n";
    std:: cout << sizeof(grade) << " bytes\n";
    std:: cout << sizeof(student) << " bytes\n";
    std:: cout << sizeof(grades)/sizeof(char) << " elements\n";
    std:: cout << sizeof(students)/sizeof(std::string) << " elements\n";


    return 0;
}
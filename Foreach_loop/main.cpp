#include <iostream>

int main(){
    // foreach loop = loop that eases the traversal over an iterable data set
    // std::string students[] ={"Hena", "Heidi", "Tammy"};
    int grades[] = {65, 72, 81, 95};

    // for(std::string student : students){
    //     std::cout << student << '\n';
    // }
    for(int grade : grades){
        std::cout << grade << '\n';
    }
    return 0;
}
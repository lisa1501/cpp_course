#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){
    /*
    Namespace = provides a solution for proventing name conflicts
                in large projects. Each entity needs a  unique name.
                A namespace allow for identically named entities 
                as long as the namespaces are different
    */

    // int x = 0;
    // std::cout << x;

    // std::cout << first::x;
    //  std::cout << second::x;


    // using namespace first;
    // std::cout << x;


    // using namespace first;
    // std::cout << second :: x;

    // using namespace std;
    // string name = "Lisa";
    
    // cout << "Hello " << name;

    std::string name = "Lisa";
    std::cout <<"Hello " << name;
    

    return 0;
}
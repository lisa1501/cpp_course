#include <iostream>

int main(){
    // Null value = a special value that means something has no value.
    //              when a pointer is holding a null value,
    //              that pointer is not pointing at anything(null pointer)

    // nullptr = keyword represents a null pointer literal

    // nullptrs are helpful when detemining if an address 
    // was successfully assigned to to a pointer

    // When using pointers, be careful that your code isn't
    // dereferencing nullptr or pointing to free memory
    // this will cause undefined behavior

    int *pointer = nullptr; 
    int x = 123;

    pointer = &x;

    if(pointer == nullptr){
        std::cout << "address was not assigned! \n"; 

    }
    else{
        std::cout << "address was successfully assigned!\n";
        std::cout << *pointer;
    }

    return 0;
}
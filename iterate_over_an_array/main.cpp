#include <iostream>

int main(){
    char grades[]={'A', 'B', 'C', 'D', 'E', 'F'};

    for(int i=0; i<sizeof(grades)/sizeof(char); i++){
        std::cout << grades[i] << std::endl;
    }
    return 0;
}
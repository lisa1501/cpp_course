#include <iostream>

int main(){
    // break = break out of loop
    // continue = skip current iteration;

    for(int i = 0; i <10; i++){
        if(i==5){
            // break;
            continue;
        }
        std::cout << i << "\n";
    }
    
}
#include <iostream>
// template <typename T>
template <typename T, typename U>

// T max(T x, U y){
//     return (x > y) ? x : y;
// }

auto max(T x, U y){
    return (x > y) ? x : y;
}

// int max(int x, int y) { 
//     return (x > y) ? x : y;
// }
// double max(double x, double y) {
//     return (x > y) ? x : y;
// }

// char max(char x, char y) {
//     return (x > y) ? x : y;
// }

int main(){

    // function template = description what a function looks like.
    //                     Can be use to generate as many overloaded functions as
    //                     needed, each using different data types.
    

    // std::cout << max(1,2) << '\n';
    // std::cout << max(1.2,2.3) << '\n';
    // std::cout << max('1','2') << '\n';
    std::cout << max(1, 2.1) << '\n';  

    return 0;
}
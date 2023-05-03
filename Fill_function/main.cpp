#include<iostream>

int main(){
    // fill() = Fills a range of elements with a specified value
    //          fill(begin, end, value)

    // std::string foods[10] = {"Pizza","Pizza","Pizza","Pizza","Pizza","Pizza","Pizza","Pizza","Pizza","Pizza"};
    
    const int SIZE = 9;
    std::string foods[SIZE];
    fill(foods, foods+(SIZE/3), "Pizza");
    fill( foods+(SIZE/3),foods + (SIZE/3)*2, "Pineapple");
    fill(foods + (SIZE/3)*2, foods + SIZE, "hotdog");
    for(std::string food : foods){
        std::cout << food << '\n';
    }
    return 0;
}
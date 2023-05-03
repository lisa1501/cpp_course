#include <iostream>

int main(){

    std::string letters[][3]={{"a","b","c"},
                            {"d","e","f"},
                            {"g","h","i"}};

    // std::cout << letters[0][0] << " ";
    // std::cout << letters[0][1] << " ";
    // std::cout << letters[0][2] << "\n";
    // std::cout << letters[1][0] << " ";
    // std::cout << letters[1][1] << " ";
    // std::cout << letters[1][2] << "\n";
    // std::cout << letters[2][0] << " ";
    // std::cout << letters[2][1] << " ";
    // std::cout << letters[2][2] << "\n";

    int rows  = sizeof(letters)/sizeof(letters[0]);
    int cols = sizeof(letters[0])/sizeof(letters[0][0]);

    for(int i = 0; i < rows; i++){
        // std::cout << letters[i] << '\n';
        for(int j = 0; j < cols; j++){
            std::cout << letters[i][j] << " ";
        }
        std::cout << '\n';
    }

    return 0;
}
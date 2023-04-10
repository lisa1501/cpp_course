/*
        typedef = reserved keyword used to create an additional name
                (alias) for another data type.
                new iddentifier for an existing type 
                Helps with readability and reduces typos
                Use ehen there is a clear benefit
                Replaced with 'using' (work better w/ templates)
    */ 

#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int> > pairlist_t;
// typedef std::string text_t;
// typedef int number_t;

using text_t = std::string;
using number_t = int;
int main(){

    // std::vector<std::pair<std::string, int> > pairlist;
    // pairlist_t pairlist;

    text_t firstName = "Lisa";
    number_t age = 21;

    std::cout << firstName << '\n';
    std::cout << age << '\n';   
    return 0;
}
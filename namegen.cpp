/******************************
Program: Name Generator
Created: 9/16/15
*******************************/

#include <iostream>
#include <random>


int main () {
    std::random_device rd;
    std::srand(rd());
    int length_of_name = 3;
    
    for (int m = 1; m <= 100; m++){
        // Output formatting
        if (m % 10 == 1) 
            std::cout << " | ";
        
        // Upper case letter
        std::cout << (char) ('A' + rand()%26);
        
        // Lower case letters
        for (int i = 0; i < length_of_name; i++)
            std::cout << (char) ('a' + rand()%26);

        // Output formatting
        std::cout << " | ";
        if (m % 10 == 0) 
            std::cout << "\n";
    }
    
    return 0;
}

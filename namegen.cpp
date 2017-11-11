/******************************

Program: Name Generator
Created: 9/16/15

*******************************/

#include <iostream>
#include <random>
#include <cstdlib>

int main () {

        std::cout << "\033[0;31m" << "\t\tTYPE Q TO QUIT | PRESS ENTER TO LOOP\n\n" \
                  << "\033[0m"; // reset to black (exit code)
        //srand(time(NULL));
        std::random_device rd;
        std::srand(rd());
        do {
        for (int m = 1; m <= 100; m++){

                if (m % 10 == 1) // && m != 100) // if you don't want an empty line
                        std::cout << " | ";

                char A = 'A' + rand()%26; // Upper case letter
                std::cout << A;

                for (int i = 0; i < 3; i++){ // Length of string
                        char a = 'a' + rand()%26; // Lower case letter
                        std::cout << a;
                }
                std::cout << " | ";
                if (m % 10 == 0) // && m != 100) // if you don't want an empty line
                        std::cout << "\n";
        }} while (std::cin.get() != 'q'); // allows user to hit 'enter' and loop again
        return 0;
}

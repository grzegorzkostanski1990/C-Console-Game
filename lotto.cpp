// lotto game as randomize numbers training

#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <time.h>

int guess[6];
int balls[6];
int counter;

int main()
{ 
    std::cout << "Welcome in our lotto game: "<<std::endl;

    for (int i = 0; i < 6; i++) {
        std::cout << "please give your " << i + 1 << "number between 1 and 49: "<<std::endl;
        std::cin >> guess[i];
    }

    std::cout << "machine draws 6 random numbers:\a " << std::endl;
    srand(time(NULL));
    Sleep(1000);
    for (int i = 0; i < 6; i++) {
    balls[i] = (rand()%49)+1;
    }

    std::cout << "The winning numbers are: ";
    for (int i = 0; i < 6; i++) {
        std::cout << balls[i] <<", ";
    }
    std::cout << std::endl;

    std::cout << "Your numbers: ";
    for (int i = 0; i < 6; i++) {
        std::cout << guess[i] << ", ";
    }
    std::cout << std::endl;

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (guess[i] == balls[j]) counter++;
        }
    }
    std::cout <<std::endl<< "you guessed " << counter << " numbers";

    if (counter == 3)std::cout << "You won 10$";
    if (counter == 4)std::cout << "You won 50$";
    if (counter == 5)std::cout << "You won 1 000$";
    if (counter == 6)std::cout << "You won 1 000 000$";

    return 0;
}


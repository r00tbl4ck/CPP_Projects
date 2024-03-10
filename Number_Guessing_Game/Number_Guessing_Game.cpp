#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cctype>


int main()
{
    bool gameover = true;
    std::srand(std::time(nullptr));
    int guessed_number{};
    int random_number = rand() % 100 + 1;

    std::cout << "I have picked a number between 0 and 100,\nTry to guess!"
              << "\n======================================================\n"
              << "Enter your guess:" << std::endl;

    while (gameover)
    {
        std::string input;
        std::cin >> input;

        // Check if input is an integer
        bool is_integer = true;
        for (char c : input) {
            if (!std::isdigit(c)) {
                is_integer = false;
                break;
            }
        }

        if (is_integer) {
            guessed_number = std::stoi(input);
            if (guessed_number <= 100) {
                if (guessed_number < random_number) {
                    std::cout << "Too low!" << std::endl;
                }
                else if (guessed_number > random_number) {
                    std::cout << "Too high!" << std::endl;
                } else {
                    std::cout << "CORRECT number!" << std::endl;
                    gameover = false;
                }
            } else {
                std::cout << "Please provide a number between 0-100" << std::endl;
            }
        } else {
            std::cout << "Invalid input. Please provide a number between 0-100." << std::endl;
        }
    }

    return 0;
}
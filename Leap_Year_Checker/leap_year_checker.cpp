#include <iostream>

int main()
{
    int year = 0;
    std::cout << "Enter a year: ";
    std::cin >> year;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        std::cout << year << " is a leap year!" << std::endl;
    }
    else {
        std::cout << year << " is NOT a leap year!" << std::endl;
    }

    return 0;
}

#include <iostream>

int main() {
    int num;
    std::cout << "Number: ";
    std::cin >> num;
    bool checkPrime = true;

    if (num <= 1)
        checkPrime = false;
    else {
        for (int i = 2; i < num; ++i) {
            if (num % i == 0) {
                checkPrime = false;
                break;
            }
        }
    }

    std::cout << std::boolalpha << checkPrime << std::endl;

    return 0;
}


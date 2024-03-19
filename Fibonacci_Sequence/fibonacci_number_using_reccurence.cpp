#include <iostream>

int fibonacci(int num) {
    if (num <= 1)
        return num;
    else
        return fibonacci(num - 1) + fibonacci(num - 2);
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    std::cout << "Fibonacci number at position " << num << ": " << fibonacci(num) << '\n';

    return 0;
}


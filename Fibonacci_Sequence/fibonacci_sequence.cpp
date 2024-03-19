#include <iostream>

int main()
{
    int n = 0, first = 0, second = 1, next = 0;
    std::cout << "Enter the number of terms: ";
    std::cin >> n;

    if (n <= 1) {
        std::cout << "Fibonacci Sequence up to " << n << " terms:\n";
        std::cout << first;
    }
    else{
        std::cout << "Fibonacci Sequence up to " << n << " terms:\n";
        std::cout << first << ", " << second << ", ";
        for (int i = 2; i < n; i++){
            next = first + second;
            first = second;
            second = next;
            std::cout << next;
            if (i < n - 1) {
                std::cout << ", ";
            }
        }
    }

    return 0;
}

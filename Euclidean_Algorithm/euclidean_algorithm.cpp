#include <iostream>

int euclideanAlgorithm(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    return a;
}

int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    int gcd = euclideanAlgorithm(a, b);

    std::cout << "GCD of " << a << " and " << b << " is: \n" << gcd;

    return 0;
}


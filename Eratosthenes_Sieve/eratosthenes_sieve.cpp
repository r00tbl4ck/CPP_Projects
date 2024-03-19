#include <iostream>
#include <vector>

void sieveOfEratosthenes(int n) {
    std::vector<bool> isPrime(n + 1, true);

    for (int p = 2; p * p <= n; ++p) {
        if (isPrime[p]) {
            for (int i = p * p; i <= n; i += p)
                isPrime[i] = false;
        }
    }

    for (int p = 2; p <= n; ++p) {
        if (isPrime[p])
            std::cout << p << " ";
    }
}

int main() {
    int n;
    std::cout << "N: ";
    std::cin >> n;

    std::cout << "Prime numbers between " << n << " are: \n";
    sieveOfEratosthenes(n);

    return 0;
}


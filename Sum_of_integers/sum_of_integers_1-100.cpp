#include <iostream>

int sum(int num) {
    if (num == 1)
        return 1;
    else
        return num + sum(num - 1);
}

int main() {
    int result = sum(100);
    std::cout << "Sum of integers: " << result << '\n';

    return 0;
}


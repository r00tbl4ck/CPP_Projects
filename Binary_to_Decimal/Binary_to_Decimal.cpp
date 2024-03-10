#include <iostream>


int main()
{
    std::cout << "Enter the binary value: ";
    int num;
    std::cin >> num;

    int dec_value = 0;
    int base = 1;

    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;

        dec_value += last_digit * base;

        base *= 2;
    }

    std::cout << dec_value << std::endl;


    return 0;
}
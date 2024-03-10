#include <iostream>
#include <vector>

int main ()
{
    int decimal, remainder;
    std::vector<int> binary;

    std::cout << "Enter the decimal value: ";
    std::cin >> decimal;

    while(decimal > 0){
        remainder = decimal % 2;
        binary.push_back(remainder);
        decimal /= 2;
    }

    for(int i = binary.size() - 1; i >= 0; --i){
        std::cout << binary[i];
    }
    std::cout << std::endl;


    return 0;
}
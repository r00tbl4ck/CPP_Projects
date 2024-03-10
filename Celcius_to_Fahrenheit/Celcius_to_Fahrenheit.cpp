#include <iostream>

int main(){

    double celcius = 0;
    double fahrenheit = 0;

    std::cout << "Enter the celsius value: ";
    std::cin >> celcius;

    fahrenheit = (celcius * 9/5)+32;
    std::cout << "Fahrenheit value is: " << fahrenheit << std::endl;

    return 0;
}
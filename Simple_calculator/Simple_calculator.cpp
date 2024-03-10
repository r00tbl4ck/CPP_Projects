#include <iostream>
#include <string>

//Function prototypes
void print(std::string a);

//Functions
void print(std::string message) {
    std::cout << message << std::endl;
}

void print(int number) {
    std::cout << number << std::endl;
}

int main()
{
    int first_number{};
    int second_number{};
    int selection{};
    int result{};

    do
    {

        print("Simple Calculator\n=========================");

        print("Operation Selection\n=========================");
        print("1)+\n2)-\n3)*\n4)\n0)Quit");
        std::cin >> selection;

        print("First Number: ");

        std::cin >> first_number;
        print("Second Number: ");
        std::cin >> second_number;


        switch (selection){
            case 1: result = first_number+second_number; print(result); break;
            case 2: result = first_number-second_number; print(result); break;
            case 3: result = first_number*second_number; print(result); break;
            case 4:
            {
                if(second_number == 0){
                    print("Cannot divide by 0");
                }else{
                    print(first_number/second_number); break;
                }
            }
            default: print("Wrong selection");
        }
    }while (selection != 0);

    return 0;
}
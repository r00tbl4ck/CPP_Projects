#include <iostream>
#include <cstdlib>
#include <string>
#include <ctime>
#include <sstream>
#include <cstring>

//Function prototypes
std::string generate_random_password(char *pw, int pw_length);

//Functions
std::string generate_random_password(char *pw, int pw_length) {
    std::string result;
    for(int i = 0; i < pw_length; i++){
        int random_index = std::rand() % strlen(pw);
        char random_char = pw[random_index];
        result += random_char;
    }
    return result;
}

int main()
{
    const std::string digits = {"0123456789"};
    const std::string lowercase = {"abcdefghijklmnopqrstuvwxyz"};
    const std::string uppercase = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    const std::string symbols = {"!@#$%^&*()_+{}[];:<>,.?/~`|\\"};

    int password_length{};
    std::srand(std::time(nullptr));

    std::cout << "Password Generator\n"
              << "Password length: " << std::endl;

    std::cin >> password_length;
    char selection{};
    std::string password;

    do{
        std::cout << "Select and add characters\n"
                  << "Number --> n\nLower Case --> l\n"
                  << "Upper Case --> u\nSymbol --> s\n"
                  << "Quit --> q\n";

        std::cin >> selection;

        switch (selection){
            case 'n':; case 'N': password += digits; break;
            case 'l':; case 'L': password += lowercase; break;
            case 'u':; case 'U': password += uppercase; break;
            case 's':; case 'S': password += symbols; break;
            case 'q':; case 'Q': break;
            default: std::cout << "Please enter a valid selection!" << std::endl;
        }

        std::cout << "Password char array: " << password << std::endl;

    }while(selection != 'q' && selection != 'Q');

    const char *char_password = password.c_str();

    std::cout << "Generated password: " << generate_random_password(const_cast<char*>(char_password), password_length) << std::endl;

    return 0;
}
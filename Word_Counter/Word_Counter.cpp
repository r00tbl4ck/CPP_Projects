#include <iostream>
#include <vector>
#include <string>

int main ()
{
    std::vector<std::string> context;
    std::string text;

    std::cout << "Enter the text.\n"
              << "To quit, write 'f..'" << std::endl;
    do{
        std::cin >> text;
        context.push_back(text);

    }while(text != "f..");

    std::cout << "Your context has "<< context.size() -1 << " words." << std::endl;

    return 0;
}
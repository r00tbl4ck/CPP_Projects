#include <iostream>
#include <string>

bool checkPalindrome(std::string str) {
    const int len = str.length();
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            return false; // If any pair of characters doesn't match, it's not a palindrome
        }
    }
    return true; // If all pairs of characters match, it's a palindrome
}

int main() {
    std::string word;
    std::cout << "Enter the word: ";
    std::cin >> word;

    if (checkPalindrome(word)) {
        std::cout << word << " is a palindrome" << std::endl;
    } else {
        std::cout << word << " is NOT a palindrome" << std::endl;
    }

    return 0;
}

#include <iostream>
#include <unordered_map>
#include <conio.h>
#include <chrono>
#include <thread>

int main() {
    // Updated Morse code table
    std::unordered_map<std::string, char> morseToAlphabet = {
        {".-", 'A'},   {"-...", 'B'}, {"-.-.", 'C'}, {"-..", 'D'},  {".", 'E'},
        {"..-.", 'F'}, {"--.", 'G'},  {"....", 'H'}, {"..", 'I'},   {".---", 'J'},
        {"-.-", 'K'},  {".-..", 'L'}, {"--", 'M'},   {"-.", 'N'},   {"---", 'O'},
        {".--.", 'P'}, {"--.-", 'Q'}, {".-.", 'R'},  {"...", 'S'},  {"-", 'T'},
        {"..-", 'U'},  {"...-", 'V'}, {".--", 'W'},  {"-..-", 'X'}, {"-.--", 'Y'},
        {"--..", 'Z'}, {"-----", '0'}, {".----", '1'}, {"..---", '2'},
        {"...--", '3'}, {"....-", '4'}, {".....", '5'}, {"-....", '6'},
        {"--...", '7'}, {"---..", '8'}, {"----.", '9'},
    };

    // No need to use the namespace globally, so we use std::chrono explicitly
    std::cout << "Start typing Morse code (press 'ESC' to exit):\n";
    std::chrono::steady_clock::time_point lastInputTime = std::chrono::steady_clock::now();

    std::string morseCodeValue = "";
    std::string translatedText = ""; // To keep the Latin characters

    while (true) {
        if (_kbhit()) {
            char ch = _getch();

            if (ch == 27) break; // Exit on 'ESC'

            // Add input to the current Morse code value
            if (ch == ' ' || ch == '/') {
                // Translate the Morse code to Latin character (space in Morse code)
                if (!morseCodeValue.empty()) {
                    auto morseInput = morseToAlphabet.find(morseCodeValue);
                    if (morseInput != morseToAlphabet.end()) {
                        translatedText += morseInput->second;
                    }
                    else {
                        translatedText += "?"; // Invalid Morse code
                    }
                    morseCodeValue = ""; // Reset for the next character
                }
            }
            else {
                // If input is a valid Morse code part, add it
                if (ch == '.' || ch == '-') {
                    morseCodeValue += ch; // Add Morse code part
                    std::cout << ch; // Show the part of the Morse code
                }
            }

            lastInputTime = std::chrono::steady_clock::now(); // Reset timer
        }

        // Check inactivity (no input for 0.5 seconds)
        if (std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - lastInputTime).count() >= 500 && !morseCodeValue.empty()) {
            // Translate Morse code to Latin
            auto morseInput = morseToAlphabet.find(morseCodeValue);
            if (morseInput != morseToAlphabet.end()) {
                translatedText += morseInput->second;
            }
            else {
                translatedText += "?"; // Invalid Morse code
            }

            // Clear the screen by moving the cursor to the start and overwriting everything
            std::cout << "\r"; // Move cursor to beginning of line
            std::cout << std::string(50, ' '); // Clear the line by writing spaces
            std::cout << "\r"; // Return to beginning again

            std::cout << translatedText; // Print the translated text

            morseCodeValue = ""; // Reset for the next character
            lastInputTime = std::chrono::steady_clock::now(); // Reset timer
        }

        // Check inactivity for 1.5 seconds to add whitespace
        if (std::chrono::duration_cast<std::chrono::seconds>(std::chrono::steady_clock::now() - lastInputTime).count() >= 1.5) {
            // Add a space between words if no input for 1.5 seconds
            translatedText += " ";
            morseCodeValue = ""; // Reset for the next character
            lastInputTime = std::chrono::steady_clock::now(); // Reset timer

            // Clear the screen and display the updated text with the whitespace
            std::cout << "\r"; // Move cursor to beginning of line
            std::cout << std::string(50, ' '); // Clear the line by writing spaces
            std::cout << "\r"; // Return to beginning again

            std::cout << translatedText; // Print the translated text with added whitespace
        }

        std::this_thread::sleep_for(std::chrono::milliseconds(100)); // Reduce CPU usage
    }
    return 0;
}

#include <iostream>
#include <vector>

int main() {
    // 1. Variables to store the chosen number and user input
    int chosenNumber = 7; 
    int userGuess;
    
    // 2. A list (vector) to keep all numbers entered by the user
    std::vector<int> guessHistory;

    std::cout << "--- Guessing Game ---" << std::endl;

    // 3. While loop that runs as long as the guess is not equal to the chosen number
    while (userGuess != chosenNumber) {
        
        // Ask the user to enter a number
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;

        // Immediately save the value into the array/list
        guessHistory.push_back(userGuess);

        // 4. if / else statements to compare the guess
        if (userGuess > chosenNumber) {
            std::cout << "Too high" << std::endl;
        } 
        else if (userGuess < chosenNumber) {
            std::cout << "Too low" << std::endl;
        } 
        else {
            std::cout << "Correct!" << std::endl;
        }
    }

    // 5. After the loop finishes, display all guesses using a for loop
    std::cout << "\nYour Guess History:" << std::endl;
    for (int i = 0; i < guessHistory.size(); i++) {
        std::cout << "Attempt " << (i + 1) << ": " << guessHistory[i] << std::endl;
    }

    return 0;
}

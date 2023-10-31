#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Initialize random number generator
    srand(static_cast<unsigned>(time(0)));

    int secretNumber = rand() % 100 + 1;  // Generate a random number between 1 and 100
    int guess;
    int attempts = 0;
    bool guessed = false;

    cout << "Welcome to the Number Guessing Game!" << endl;
    cout << "I've selected a random number between 1 and 100. Try to guess it." << endl;

    while (!guessed) {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;

        if (guess < secretNumber) {
            cout << "Try a higher number." << endl;
        } else if (guess > secretNumber) {
            cout << "Try a lower number." << endl;
        } else {
            cout << "Congratulations! You guessed the number " << secretNumber << " in " << attempts << " attempts." << endl;
            guessed = true;
        }
    }

    return 0;
}

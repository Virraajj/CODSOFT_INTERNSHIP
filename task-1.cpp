#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand((unsigned int)time(NULL));

    int number = (rand() % 10) + 1; // Generate a random number between 1 and 10
    int guess = 0;

    do {
        cout << "Enter your guess between 1 and 10: ";
        cin >> guess;

        if (guess < 1 || guess > 10) {
            cout << "Number is out of bounds. Please try with a number between 1 and 10.\n";
        } else if (guess > number) {
            cout << "Guess is higher, please try with a lower number.\n";
        } else if (guess < number) {
            cout << "Guess is lower, please try with a higher number.\n";
        } else {
            cout << "You're right! You won!\n";
        }

    } while (guess != number);

    return 0;
}

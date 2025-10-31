//a number guessing project

#include <iostream>
#include <cstdlib> //for rand() function
#include <ctime> //fot time() to generate random numbers
using namespace std;

int main()
{
    // Seed the random number generator so we get different numbers each time
    srand(time(0));
    
    // Generate a random number between 1 and 10
    int secretNumber = rand() % 10 + 1;
    
    int guess = 0; // This is where user guess is stored

    cout << "I have picked a number between 1 and 10" << endl << "Try to guess it"<< endl;

    // The while loop continues until the guess is correct
    while(guess != secretNumber)
    {
        cout << "Enter your guess: ";
        cin >> guess;

        // check the guess and give hints
        if(guess < secretNumber)
        {
            cout << "Too low. Try Again!!!" << endl;
        }
        else if(guess > secretNumber)
        {
            cout << "Too high. Try Again!!!" << endl;
        }
        else
        {
            cout << "Correct!!!" << endl << "You guessed the right number!";
        }
    }
    return 0; //End of program
}
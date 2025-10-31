// A number game program

#include <iostream>
#include <cstdlib> // For rand()
#include <ctime>  // Fot time()

using namespace std;

int main() //Start of program
{
    srand(time(0)); //seed random generator once

    char playAgain = 'y'; //To control replay

    while(playAgain == 'y' || playAgain == 'Y')
    {
        int maxNum;
        int difficulty;

        // To choose difficulty
        cout << "Choose difficulty: " << endl;
        cout << "1. Easy (1 to 10)" << endl;
        cout << "2. Medium (1 to 50)" << endl;
        cout << "3. Hard (1 to 100)" << endl;
        cout << "Select (1-3): ";
        cin >> difficulty;

        // Set range based on difficulty
        if(difficulty == 1)
        {
            maxNum = 10;
        }
        else if(difficulty == 2)
        {
            maxNum = 50;
        }
        else
        {
            maxNum = 100;
        }

        // Generate secret number in chosen difficuty range
        int secretNumber = rand() % maxNum + 1;
        int guess = 0;
        int attempts = 0; // Count no of guesses

        cout << "I have picked a number between 1 and " << maxNum << endl;
        cout << "Try to guess it!";

        // Loop until user gets it right
        while(guess != secretNumber)
        {
            cout << "\nGuess the number: ";
            cin >> guess;
            attempts++; //Each guess increases attempt count

            if(guess < secretNumber)
            {
                cout << "Too low!Try Again.";
            }

            else if(guess > secretNumber)
            {
                cout << "Too high!Try Again.";
            }

            else
            {
                cout << "You guessed the correct number in " << attempts << " attempts" << endl;
            }
        }

        // Ask user if they want to play again
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
}

    cout << "Thanks for playing!" << endl;
    return 0;
}
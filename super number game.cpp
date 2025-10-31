// super max out numbers game

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>
#include <fstream>
#include <chrono>
#include <thread>

using namespace std;

//File to store leaderboard
const string LEADERBOARD_FILE = "leaderboard.txt";

//Function to clear invalid output
void clearInput()
{
    cin.clear();

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

//Color print helper
void printColor(string text, string color)
{
    cout << color << text << "\033[0m";
}

//Simple delay for animation
void wait(int ms)
{
    this_thread::sleep_for(chrono::milliseconds(ms));
}

//load best scores
void loadLeaderboard(int &easy, int &medium, int &hard)
{
    ifstream file(LEADERBOARD_FILE);
    if (file.is_open())
    {
        file >> easy >> medium >> hard;
        file.close();
    }
}

// Save best scores
void saveLeaderboard(int easy, int medium, int hard)
{
    ofstream file(LEADERBOARD_FILE);
    file << easy << " " << medium << " " << hard;
    file.close();
}

int main() //Start of program
{
    srand(time(0));

    int bestEasy = INT_MAX, bestMedium = INT_MAX, bestHard = INT_MAX;
    loadLeaderboard(bestEasy, bestMedium, bestHard);

    char playAgain = 'y';

    while(playAgain == 'y' || playAgain == 'Y')
    {
        //Multi-player part
        int players;
        cout << "\nHow many players? (1-4): ";
        while(!(cin >> players) || players < 1 || players > 4)
        {
            clearInput();
            printColor("Invalid! Enter a number between 1-4: ", "\033[31m");
        }

        string playerNames[4];
        for(int i = 0; i < players; i++)
        {
            cout << "Enter Player " << i + 1 << " name: ";
            cin >> playerNames[i];
        }

        int maxNum, maxAttempts, difficulty;
        cout << "\nChoose difficulty: " << endl;
        cout << "1. Easy (1-10, 5 attempts)" << endl;
        cout << "2. Medium (1-50, 7 attempts)" << endl;
        cout << "3. Hard (1-100, 10 attempts)" << endl;
        cout << "Select (1-3): ";

        while(!(cin >> difficulty) || difficulty < 1 || difficulty > 3)
        {
            clearInput();
            printColor("Invalid choice! Enter 1-3: ", "\033[31m");
        }

        if (difficulty == 1)
        {
            maxNum = 10; maxAttempts = 5;
        }
        else if (difficulty == 2)
        {
            maxNum = 50; maxAttempts = 7;
        }
        else
        {
            maxNum = 100; maxAttempts = 10;
        }

        int secretNum = rand() % maxNum + 1;
        int lastDifference = INT_MAX;
        int attempts = 0;
        int guess;

        printColor("\nGame Loading", "\033[34m");
        for(int i = 0; i < 3; i++)
        {
            cout << "."; wait(400);
        }
        cout << endl;

        cout << "A number between 1 and " << maxNum << " has been chosen!" << endl;

        //Start Timing
        auto startTime = chrono::high_resolution_clock::now();

        //Guessing loop
        while(attempts < maxAttempts)
        {
            int currentPlayer = attempts % players;

            cout << "\n" << playerNames[currentPlayer] << "'s guess (" << attempts + 1 << "/" <<maxAttempts << "): ";

            while(!(cin >> guess))
            {
                clearInput();
                printColor("Enter a valid number: ", "\033[31m");
            }

            attempts++;
            int diff = abs(secretNum - guess);

            if (guess == secretNum)
            {
                auto endTime = chrono::high_resolution_clock::now();
                int timeTaken = chrono::duration_cast<chrono::seconds>(endTime - startTime).count();

                printColor("\nCorrect! You win!\n", "\033[32m");
                cout << playerNames[currentPlayer] << " guessed it in " << attempts << " attempts and " << timeTaken << " seconds!\n";

                //Leaderboard update with time bonus consideration
                if(difficulty == 1 && attempts < bestEasy)
                {
                    bestEasy = attempts;
                }
                if (difficulty == 2 && attempts < bestMedium)
                {
                    bestMedium = attempts;
                }
                if(difficulty == 3 && attempts < bestHard)
                {
                    bestHard = attempts;
                }

                saveLeaderboard(bestEasy, bestMedium, bestHard);

                break;
            }

            //Warmer/Colder hints
            if (diff < lastDifference)
            {
                printColor("Warmer \n", "\033[35m");
            }
            else
            {
                printColor("Colder \n", "\033[36m");
            }

            if (guess < secretNum)
            {
                printColor("Too low\n", "\033[31m");
            }
            else printColor("Too high!\n", "\033[31m");

            lastDifference = diff;
        }

        if(guess != secretNum)
        {
            printColor("\nGame Over! Out of attempts!\n", "\033[31m");
            cout << "The number was: " << secretNum << "\n";
        }

        //Show leaderboard stored in file
        printColor("\n Leaderboard(Best Attempts Ever)\n", "\033[34m");
        cout << "Easy: " << (bestEasy == INT_MAX ? "-" : to_string(bestEasy)) << "\n";
        cout << "Medium: " << (bestMedium == INT_MAX ? "-" : to_string(bestMedium)) << "\n";
        cout << "Hard: " << (bestHard == INT_MAX ? "-" : to_string(bestHard)) << "\n";

        cout << "\nPlay Again? (y/n): ";
        cin >> playAgain;
    }

    printColor("\nThanks for playing!\n", "\033[32m");
    return 0;
}
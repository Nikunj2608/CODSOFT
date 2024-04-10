#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    int number, guess, attempts = 0;
    srand(time(0));
    number = rand() % 100 + 1;
    cout << "Number Guessing Game for 1 to 100 numbers\n";
    do
    {
        cout << "Enter a guess between 1 and 100 : ";
        cin >> guess;
        attempts++;
        if (guess > number)
        {
            cout << "Too high!\n";
        }
        else if (guess < number)
        {
            cout << "Too low!\n";
        }
        else
        {
            cout << "\nCorrect! You got it in " << attempts << " attempts!";
        }
    } while (guess != number);
    return 0;
}
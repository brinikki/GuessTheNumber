#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
  int nums, guess, attempts; attempts = 1;
  srand ( ( int ) time (0) );
  nums = ( rand() % 100) + 1;
  guess:
  cout << "Guess a number from 1 to 100\n";
  cout << "Attempt #" << attempts << endl;
  cout << "\n\n";
  cout << "Guess the number:";
  cin >> guess;
  cout << "\n\n\n";
  result:

  
  if (guess == nums)
  {
  cout << "\033[2J\033[1;1H"; // Clear Screen
  cout << "Your guess is correct!\n\n\n";
  attempts = attempts + 1;
  goto over; 
  }

  
  if (guess < nums)
  {
  cout << "\033[2J\033[1;1H"; // Clear Screen
  cout << "The guess is smaller than the real number.\n\n\n";
    attempts = attempts + 1;
  goto guess; 
  }



  if (guess > nums)
  {
  cout << "\033[2J\033[1;1H"; // Clear Screen
  cout << "The guess is larger than the real number.\n\n\n";
    attempts = attempts + 1;
  goto guess; 
    
  }
  over: 
  cout << "It took you " << attempts << " attempts to guess the number\n\n";
  cout << "The correct number was: " << nums <<endl;
  return 0;
}
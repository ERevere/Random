
#include <iostream>

using namespace std;

int
main ()
{
  int lowerbound, higherbound, iSecret, Guess;

  cout << "Enter the lowerbound for your random number: ";
  cin >> lowerbound;
  lowerbound = lowerbound - 1;
  cout << "Enter the higherbound for your random number: ";
  cin >> higherbound;
  higherbound = higherbound + 1;
  Secret = rand () % higherbound + lowerbound;
  cout << "Guess the number which has been generated: ";
  cin >> Guess;


  if (Secret < Guess)
    cout << "The random number was lower" << " The final number was: " <<
      Secret << " While your guess was: " << Guess;

  if (Secret > Guess)
    cout << "The random number was higher" << " The final number was: " <<
      Secret << " While your guess was: " << Guess;

  if (Secret == Guess)
    cout << "Congratualtion, you guess yes right very nice";

  return 0;
}

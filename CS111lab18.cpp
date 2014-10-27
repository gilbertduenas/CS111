/********
Gilbert Duenas
CS111

This program displays a row of stars based on a number entered by the user.
It outputs rows in descending order until a single row remains.
*********/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  //Declare and intialize variables
  int num; //number

  //Display output and ask for user input
  cout << "Please enter a number: ";
  cin >> num;

  //Calculate the result
  for( ; num > 0; num--)
  //  while(num > 0)
  {
    for(int i = 0; i < num; i++)
	{
    cout << "*";
	}
  //num--;
      cout << endl;
  
  }
  cout << endl;
  return 0;
}

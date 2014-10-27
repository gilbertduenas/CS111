/********
Gilbert Duenas

This program asks the user to enter three test scores for five students using arrays and for loops.
Then the program will calculate the average score by student number and test number
*********/
#include <iostream>
#include <iomanip>
using namespace std;

//Declare constants
const int SIZE_TEST = 3;
const int SIZE_STU = 5;

//Declare function prototypes
void fillArray(int scores[SIZE_TEST][SIZE_STU]);
void printArray(const int scores[SIZE_TEST][SIZE_STU]);

int main()
{
  //Declare arrays
  int scores[SIZE_TEST][SIZE_STU];
  
  //Call the functions and pass the arrays
  fillArray(scores); //just the array name without [][]
  printArray(scores);

  return 0;
}

//This function receives user input
void fillArray(int scores[SIZE_TEST][SIZE_STU])
{
  //This loop asks for the user to enter scores by test number, then student number
  for(int test = 0; test < SIZE_TEST; test++)
  {
    cout << "\nPlease enter scores for Test #" << test + 1 << endl;
    for(int stu = 0; stu < SIZE_STU; stu++)
    {
      cout << "\tStudent#" << stu + 1 << ":";
      cin >> scores[test][stu];
    }
  }
}

//This function outputs the data
void printArray(const int scores[SIZE_TEST][SIZE_STU])
{
  //This shows the top row
  cout << endl;
  cout << setw(8) << "Test#";
  for(int stu = 0; stu < SIZE_STU; stu++)
    cout << setw(7) << "Stu" << stu+1;

  cout << setw(10) << "Average" << endl;
  //This nested loop prints out the scores
  for(int test = 0; test < SIZE_TEST; test++)
    {
      int sumTest = 0;

      cout << setw(8) << test + 1;
      for(int stu = 0; stu < SIZE_STU; stu++)
    	{
    	  cout << setw(8) << scores[test][stu];
    	  sumTest += scores[test][stu]; //Each score is added by test number 
    	} 
      //This calculates the average score by test number
      cout << setw(10) << fixed << setprecision(1) << sumTest/5.0;  
      cout << endl;
    }

  cout << setw(8) << "Average";
  //This loop adds the scores by student number
  for(int stu2 = 0; stu2 < SIZE_STU; stu2++)
    {
      int sumStu = 0;

      for(int test2 = 0; test2 < SIZE_TEST; test2++)
	      sumStu += scores[test2][stu2]; //Each score is added by student number

      //This calculates the average score by student
      cout << setw(8) << fixed << setprecision(1)  << sumStu/3.0;
    }
  cout << endl << endl;
}

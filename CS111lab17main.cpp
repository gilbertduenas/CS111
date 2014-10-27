/********
Gilbert Duenas
CS111
This program uses classes to create two instances of a circle.
Class methods are used to change an attribute for each circle.
*********/

#include <iostream>
#include <iomanip>
#include "lab17Circle.h"

int main()
{
  //Create c1 and c2
  Circle c1(2, "blue", 3, 3);
  Circle c2(3, "green", -3, -5);

  //Display the two circles created
  cout << "\nThe first circle: Radius is " << fixed << setprecision(2) << c1.getRadius() << endl;
  cout << "                  Color is " << c1.getColor() << endl;
  cout << "                  Area is " << c1.getArea() << endl;

  cout << "The second circle: Radius is " << c2.getRadius() << endl;
  cout << "                   Color is " << c2.getColor() << endl;
  cout << "                   Area is " << c2.getArea() << endl;

  //change the color of c1 to black
  c1.changeColor("black");

  //Change the radius of c2 to 1
  c2.changeRadius(1);

  //Show the two circles with the new changes
  cout << "\nThe first circle: Radius is " << c1.getRadius() << endl;
  cout << "                  Color is " << c1.getColor() << endl;
  cout << "                  Area is " << c1.getArea() << endl;

  cout << "The second circle: Radius is " << c2.getRadius() << endl;
  cout << "                   Color is " << c2.getColor() << endl;
  cout << "                   Area is " << c2.getArea() << endl;

  cout << "\nThe number of circles is " << c1.getnumCircles() << endl;

  return 0;
}

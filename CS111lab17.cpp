//lab17Circle.cpp
#include "lab17Circle.h"

int Circle::numCircles = 0;

Circle::Circle(double r, string c, int xco, int yco)
{
  radius = r;
  color = c;
  x = xco;
  y = yco;
  numCircles++;
}

double Circle::getArea()
{
  return radius * radius * 3.14159;
}

double Circle::getRadius()
{
  return radius;
}

string Circle::getColor()
{
  return color;
}

void Circle::changeRadius(double nR)
{
  radius = nR;
}

void Circle::changeColor(string nC)
{
  color = nC;
}

//lab17Circle.h
#include <string>
using namespace std;

class Circle
{
 private:
  double radius;
  string color;
  int x;
  int y;
  static int numCircles;

 public:
  Circle(double r, string c, int xco, int yco);
  double getArea();
  
  string getColor();
  void changeRadius(double nR);
  void changeColor(string nC);
  int getnumCircles();
};

//*************************************General Math*************************************//
// Write a C++ program to calculate and display the value of the slope of the line connecting two points with the coordinates (3,7) and (8,12). Use the fact that the slope between two points with the coordinates (x1,y1) and (x2,y2) is (y2 - y1) / (x2 - x1).//

#include <iostream>
#include <cmath>

using namespace std;

int main() {

  cout << "The formula for calulating slope is \n     (y2 - y1)/(x2 - x1)" << endl;
  cout << "Note:\n The coordinates (3,7), (8,12) are formatted (x1,y1), (x2,y2) or (x2,y2), (x1,y1)" << endl;

  //establish variables
 int x, y, g, f;
  x = 3;
  g = 8;
  y = 7;
  f = 12;

  //calculate slope
  cout << "We will now calculate slope between the two points using the formula: (y2-y1)/(x2-x1)" << endl;
  cout << " the value of the slope equals " << (f - y)/(g-x);

  // Part b) I know the value output from the code is true to the actual value of slope because using the formula (y2-y1)/(x2-x1), we get (12-7)/(8-3) = 5/5 = 1.
  
  
}
// CS1410 - Assignment 02
#include <iostream>
#include <string>
using namespace std;

//TODO 1: ShapeKind Enumeration goes here

//TODO 2: Shape Structure  goes here

// Function prototypes
double area(Shape);
//TODO 3: area() definition goes here

double perimeter(Shape);
//TODO 4: perimeter() definition goes here

string nameOf(Shape);
//TODO 5: nameOf() definition goes here

void promptAndReadInputFor(Shape&);
//TODO 6: promptAndReadInputFor() definition goes here

// The main function
int main() {
  // Shape objects
  Shape circle = { ShapeKind::CIRCLE, 0, 0 };
  //TODO 7: define two more shape objects: a square and and a rectangle 

  //TODO 8: Call the promptAndReadInputFor() function on each of the above three shapes

  //TODO 9: Print a out a report of these shapes in a table-like format

  return 0;
}

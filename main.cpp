// CS1410 - Assignment 02
#include <iostream>
#include <string>
using namespace std;

//TODO 1: ShapeKind Enumeration goes here
enum class ShapeKind (CIRCLE, SQUARE, RECTANGLE)
//TODO 2: Shape Structure  goes here
struct Shape{
  ShapeKind kind;
  double length;
  double width;
};
// Function prototypes
//double area(Shape);
//TODO 3: area() definition goes here
double area(Shape s){
  if(s.kind == ShapeKind::CIRCLE){
    return ((s.length/2)*(s.length/2)*3.14);
    else{
      return (s.length * s.width);
    }
  }
}
//double perimeter(Shape);
//TODO 4: perimeter() definition goes here
double perimeter(Shape s){
  if(s.kind == ShapeKind::CIRCLE){
    return (s.length * 3.14);
  }else{
    return ((2 * s.length) + (2 * s.width));
  }
}
//string nameOf(Shape);
//TODO 5: nameOf() definition goes here
string nameOf(Shape s){
  if(s.kind == ShapeKind::CIRCLE){
    return "Circle";
  }else if(s.kind == ShapeKind::SQUARE){
    return "Square";
  }else{
    return "Rectangle";
  }
}
//void promptAndReadInputFor(Shape&);
//TODO 6: promptAndReadInputFor() definition goes here
void promptAndReadInputFor(Shape& shape){
  if(shape.kind == ShapeKind::RECTANGLE){
    cout << "Please enter the length of the shape" << endl;
    cin >> shape.length;
    cout << "Please enter the width of the shape" << endl;
    cin >> shape.width;
    if (shape.length == shape.width){
      shape.kind = ShapeKind::SQUARE;
    }
  }else if(shape.kind  == ShapeKind::CIRCLE){
    cout << "Please enter the length of the shape" << endl;
    cin >> shape.length;
    shape.width = shape.length;
    }
  }else{
    cout << "Please enter the diameter of the shape" << endl;
    cin >> shape.length;
    shape.width = shape.length;
  }
}
// The main function
int main() {
  // Shape objects
  Shape Circle = { ShapeKind::CIRCLE, 0, 0 };
  //TODO 7: define two more shape objects: a square and and a rectangle 
  Shape Square = { ShapeKind::SQUARE, 0, 0}
  Shape Rectangle = { ShapeKind::RECTANGLE, 0, 0}
  //TODO 8: Call the promptAndReadInputFor() function on each of the above three shapes
  promptAndReadInputFor(Circle);
  promptAndReadInputFor(Square);
  promptAndReadInputFor(Rectangle);
  //TODO 9: Print a out a report of these shapes in a table-like format
  cout << setw(5) << 'Shape' << setw(6) << 'Width' << setw(6) << 'Length' << setw(8) << "Perimeter" << setw(6) << "Area" << endl;
  cout << setw(5) << 'Circle' << setw(6) << circle.width << setw(6) << circle.length << setw(8) << circle.perimeter << setw(6) << circle.area << endl;
  cout << setw(5) << 'Square' << setw(6) << square.width << setw(6) << square.length << setw(8) << square.perimeter << setw(6) << square.area << endl;
  cout << setw(7) << 'Rectangle' << setw(6) << rectangle.width << setw(6) << rectangle.length << setw(8) << rectangle.perimeter << setw(6) << rectangle.area << endl;
  return 0;
  }

#include <iostream>
#include <vector>

#include "square.hpp"
#include "triangle.hpp"

using namespace ivaresaki;
using namespace std;

int main() {

  vector<Shape*> shapes {
    new Square(2),
    new Triangle(2,4.0) 
  };

  Triangle *t = static_cast<Triangle*>(shapes.at(1));
  
  cout << "Triangle length: " << t->get_length() << endl;
  cout << "Triangle width: " << t->get_height() << endl;
  cout << "Triangle area: " << t->get_area() << endl;
  
  delete t;

  return 0;
}

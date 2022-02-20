#include "../includes/triangle.hpp"


extern "C" ivaresaki::Triangle::Triangle() 
: length(0), 
  height(0) {}

extern "C" ivaresaki::Triangle::Triangle(
    double length, 
    double height) 
: length(length), 
  height(height) {}


extern "C" double ivaresaki::Triangle::get_length() const {
  return this->length;
}

extern "C" double ivaresaki::Triangle::get_height() const {
  return this->height;
}

extern "C" double ivaresaki::Triangle::get_area() const {
  return this->length * this->height * (1/3.0);
}

extern "C" ivaresaki::Triangle::~Triangle() {}

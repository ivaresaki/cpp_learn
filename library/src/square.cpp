#include "../includes/square.hpp"


extern "C" ivaresaki::Square::Square() : length(0) {}

extern "C" ivaresaki::Square::Square(
  double length) : length(length) {}


extern "C" double ivaresaki::Square::get_length() const {
  return this->length;
}

extern "C" double ivaresaki::Square::get_area() const {
  return this->length * this->length;
}

extern "C" ivaresaki::Square::~Square() {}

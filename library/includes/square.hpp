#ifndef SQUARE_H
#define SQUARE_H

#include "shape.hpp"

#ifdef __cplusplus
extern "C" {
#endif

  namespace ivaresaki {

    class Square 
      : public Shape {
      private:
        double length {};
      public:
        Square();
        Square(double);
        virtual ~Square();

        double get_length() const;

        double get_area() const;
    };

  } // ivaresaki

#ifdef __cplusplus
}
#endif

#endif


#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "shape.hpp"

#ifdef __cplusplus
extern "C" {
#endif

  namespace ivaresaki {

    class Triangle 
      : public Shape {
      private:
        double length {};
        double height {};
      public:
        Triangle();
        Triangle(double, double);
        virtual ~Triangle();

        double get_length() const;
        double get_height() const;

        double get_area() const;
    };

  } // ivaresaki

#ifdef __cplusplus
}
#endif

#endif


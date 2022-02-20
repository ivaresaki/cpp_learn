#ifndef SHAPE_H
#define SHAPE_H

#ifdef __cplusplus
extern "C" {
#endif

  namespace ivaresaki {

    class Shape {
      public:
        virtual double get_area() const = 0;

        virtual ~Shape() = 0;

    };

  } // ivaresaki

#ifdef __cplusplus
}
#endif

#endif

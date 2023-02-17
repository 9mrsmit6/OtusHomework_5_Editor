
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Primitive.hpp"


namespace Data
{

    class Rectangle : public Primitive
    {
    public:

        Rectangle(Point basePoint_, Point secondPoint_):
            Primitive(basePoint_, PrimitiveType::Circule),
            secondPoint(secondPoint_)
        {
        }

          auto getSecondPoint()
          {
              return secondPoint;
          }
    private:
        const Point secondPoint;

    };
}

#endif // RECTANGLE_H

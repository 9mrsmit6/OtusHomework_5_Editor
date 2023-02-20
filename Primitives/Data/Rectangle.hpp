
#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "Point.hpp"

namespace Data
{
    //!Класс для прямоугольника (содердит информацию о начальной и конечной точке фигуры)
    class Rectangle
    {
    public:

        Rectangle(Point firstPoint_, Point secondPoint_):
            firstPoint{firstPoint_},
            secondPoint{secondPoint_}
        {
        }

          auto getSecondPoint()
          {
              return secondPoint;
          }

          auto getFirstPoint()
          {
              return secondPoint;
          }
    private:
        const Point firstPoint;
        const Point secondPoint;

    };
}

#endif // RECTANGLE_H

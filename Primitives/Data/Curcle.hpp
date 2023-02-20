
#ifndef CIRCLE_H
#define CIRCLE_H

#include "Point.hpp"

namespace Data
{

    class Curcle
    {
    public:

        Curcle(Point basePoint_, unsigned int radius_):
            basePoint(basePoint_),
            radius(radius_)
        {
        }

          unsigned int getRadius()
          {
              return radius;
          }

          Point getBasePoint()
          {
              return basePoint;
          }
    private:
        const Point basePoint;
        const unsigned int radius;

    };
} // end of package namespace

#endif // CIRCLE_H

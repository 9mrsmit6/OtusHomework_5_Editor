
#ifndef CIRCLE_H
#define CIRCLE_H

#include "Primitive.hpp"


namespace Data
{

    class Curcle : public Primitive
    {
    public:

        Curcle(Point basePoint_, unsigned int radius_):
            Primitive(basePoint_, PrimitiveType::Circule),
            radius(radius_)
        {
        }

          unsigned int getRadius()
          {
              return radius;
          }
    private:
        const unsigned int radius;

    };
} // end of package namespace

#endif // CIRCLE_H

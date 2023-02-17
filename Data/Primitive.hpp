
#ifndef PRIMITIVE_H
#define PRIMITIVE_H

#include "Point.hpp"
#include <string>

namespace Data
{
    enum class PrimitiveType
    {
        Circule=0,
        Rectange
    };

    class Primitive
    {
        public:

            Primitive(Point basePoint_,  PrimitiveType type_):
                type(type_),
                basePoint(basePoint_)
            {

            }

            auto getType()      {   return type;        }
            auto getBasePoint() {   return basePoint;   }

        protected:
            const PrimitiveType type{PrimitiveType::Circule};
            const Point basePoint;
    };
}

#endif // PRIMITIVE_H

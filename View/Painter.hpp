#ifndef PAINTER_HPP
#define PAINTER_HPP

#include "../Data/Primitive.hpp"
#include "ViewPrinters.hpp"
#include "Canvas.hpp"
#include <memory>

namespace Data
{


    class DataListener
    {
    public:
        virtual void paintPrimitive(std::shared_ptr<Data::Primitive> obj)=0;
        virtual void clearPrimitive(std::shared_ptr<Data::Primitive> obj)=0;

    };
}

namespace View
{



    class Painter:public Data::DataListener
    {
    public:
        Painter()
        {

        }
        void paintPrimitive(std::shared_ptr<Data::Primitive> obj) override
        {

        };
        void clearPrimitive(std::shared_ptr<Data::Primitive> obj) override
        {

        };

    private:
        Canvas cnv;

        void printPrimitive(std::shared_ptr<Data::Primitive> obj)
        {
            auto curcle=obj.get();
            auto b=static_cast<Data::Curcle>(curcle);
            switch(obj->getType())
            {
                case Data::PrimitiveType::Circule:
//                    auto curcle=&obj;
//                    auto b=static_cast<Data::Curcle>(curcle);
                    View::printPrimitive<Data::Primitive>(obj, cnv);
                    break;
                case Data::PrimitiveType::Rectange:
                    break;

            }

        }

    };
}

#endif // PAINTER_HPP

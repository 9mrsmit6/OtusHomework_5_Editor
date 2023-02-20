#ifndef PRIMITIVEENTERY_HPP
#define PRIMITIVEENTERY_HPP
#include <memory>
#include "Data/Rectangle.hpp"
#include "View/Painters.hpp"
#include "Export/exporters.hpp"

namespace Data
{
    struct PrimitiveEntery
    {
            virtual void  paint()=0;
            virtual Files::DataEnteryFileInfo  getExportInfo()=0;
    };

    struct RectangleEntery: public PrimitiveEntery
    {
        RectangleEntery(Point a, Point b):
            PrimitiveEntery{},
            obj{std::make_shared<Data::Rectangle>(a,b)}
        {}

        void  paint() override
        {
            View::Painter::DrawPrimitive(obj);
        }

        Files::DataEnteryFileInfo  getExportInfo()override
        {
            return Files::Exporter::getFileInfo(obj);
        }

        ~RectangleEntery() = default ;


    private:
        std::shared_ptr<Data::Rectangle> obj;
    };


    struct CurcleEntery: public PrimitiveEntery
    {

        CurcleEntery(Point a, unsigned int r):
            PrimitiveEntery{},
            obj{std::make_shared<Data::Curcle>(a,r)}
        {}


        void  paint() override
        {
            View::Painter::DrawPrimitive(obj);
        }

        Files::DataEnteryFileInfo  getExportInfo()override
        {
            return Files::Exporter::getFileInfo(obj);
        }

         ~CurcleEntery() = default ;

    private:
        std::shared_ptr<Data::Curcle> obj;
    };

}

#endif // PRIMITIVEENTERY_HPP

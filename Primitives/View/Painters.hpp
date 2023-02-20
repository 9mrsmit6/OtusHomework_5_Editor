#ifndef CURCLEPAINTER_HPP
#define CURCLEPAINTER_HPP

#include "../Data/Curcle.hpp"
#include "../Data/Rectangle.hpp"
#include <memory>
namespace View
{
    namespace Painter
    {

        template <class T>
        void DrawPrimitive(std::shared_ptr<T> obj);

        template<>
        void DrawPrimitive<Data::Curcle>(std::shared_ptr<Data::Curcle> obj)
        {
            //отрисовка
        }

        template<>
        void DrawPrimitive<Data::Rectangle>(std::shared_ptr<Data::Rectangle> obj)
        {
            //отрисовка
        }


    }


}

#endif // CURCLEPAINTER_HPP

#ifndef VIEWCONVERTERS_HPP
#define VIEWCONVERTERS_HPP

#include "../Data/Curcle.hpp"
#include "../Data/Rectangle.hpp"
#include "Canvas.hpp"
#include <memory>
namespace View
{

    class CurcleView
    {

    };

    template <class T>
    void printPrimitive(std::shared_ptr<T> obj, Canvas cv);

    template <>
    void printPrimitive<Data::Curcle>(std::shared_ptr<Data::Curcle> obj, Canvas cv)
    {

    }

    template <>
    void printPrimitive<Data::Rectangle>(std::shared_ptr<Data::Rectangle> obj, Canvas cv)
    {

    }

    template <class T>
    void clearPrimitive(std::shared_ptr<T> obj, Canvas cv);

    template <>
    void clearPrimitive<Data::Curcle>(std::shared_ptr<Data::Curcle> obj, Canvas cv)
    {

    }

    template <>
    void clearPrimitive<Data::Rectangle>(std::shared_ptr<Data::Rectangle> obj, Canvas cv)
    {

    }


}

#endif // VIEWCONVERTERS_HPP

#ifndef EXPORTERS_HPP
#define EXPORTERS_HPP
#include "../Data/Curcle.hpp"
#include "../Data/Rectangle.hpp"
#include <memory>

namespace Files
{
    struct DataEnteryFileInfo
    {

    };

    namespace Exporter
    {

        template <class T>
        DataEnteryFileInfo getFileInfo(std::shared_ptr<T>  obj);

        template <>
        DataEnteryFileInfo getFileInfo<Data::Curcle>(std::shared_ptr<Data::Curcle> obj)
        {
            return DataEnteryFileInfo{};

        }

        template <>
        DataEnteryFileInfo getFileInfo<Data::Rectangle>(std::shared_ptr<Data::Rectangle> obj)
        {
            return DataEnteryFileInfo{};

        }


    }

}

#endif // EXPORTERS_HPP

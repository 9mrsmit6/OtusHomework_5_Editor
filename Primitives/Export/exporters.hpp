#ifndef EXPORTERS_HPP
#define EXPORTERS_HPP
#include "../Data/Curcle.hpp"
#include "../Data/Rectangle.hpp"
#include <memory>

namespace Files
{
    //!Здесь должно быть описание представления примтива для экспорта
    struct DataEnteryFileInfo
    {

    };

    namespace Exporter
    {
        //!Здесь должно быть преобразование примитива в формат экспорта
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

#ifndef EXPORTER_HPP
#define EXPORTER_HPP

#include "../Primitives/PrimitivesDataBase.hpp"
#include <string>

namespace Files
{
    namespace Exporter
    {
        //!Здесь должен быть реализован рендеринг файла из БД
        void fileExporter(Data::DataBase& db, std::string fileName)
        {
            /*
             * open file
             * for(){
             * render(db.getPrimitive().getExportInfo())
             *
             * }
             */
        }
    }
}

#endif // EXPORTER_HPP

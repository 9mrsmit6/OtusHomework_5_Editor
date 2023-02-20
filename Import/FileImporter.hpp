#ifndef FILEIMPORTER_HPP
#define FILEIMPORTER_HPP

#include "../Primitives/PrimitivesDataBase.hpp"
#include <string>

namespace Files
{
    namespace Importer
    {
        void fileImporter(Data::DataBase& db, std::string fileName)
        {
            /*
             * open file  / db.clear
             * for(){
             * readBlock/parseBlock
             * db.createPrimitive
             * }
             */
        }
    }
}

#endif // FILEIMPORTER_HPP

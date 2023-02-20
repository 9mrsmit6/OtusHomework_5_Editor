#ifndef EDITOR_HPP
#define EDITOR_HPP

#include "../Primitives/PrimitivesDataBase.hpp"
#include "../Import/FileImporter.hpp"
#include "../Exporter/Exporter.hpp"

namespace View
{
    //! Место где обрабатываем поведение пользователя. Предполагаю что этот модуль надо разобрать на более мелкие
    struct Editor
    {
        Editor(Data::DataBase& db_):
            db{db_}
        {}

        void createCurcleButton()
        {
           // db.createCurcle()
        }

        void createRectangleButton()
        {
           // db.createRectangle()
        }

        void createDocumentButton()
        {
          //  db.deleteAllPrimitive();
        }

        void deletePrimitiveButton()
        {
//            db.deletePrimitive()
        }

        void importButton()
        {
            //поговорить с пользователем что текущий файл будет затерт
            Files::Importer::fileImporter(db, "file.name");
        }

        void exportButton()
        {
            Files::Exporter::fileExporter(db, "file.name");
        }

    private:
        Data::DataBase& db;

    };
}
#endif // EDITOR_HPP

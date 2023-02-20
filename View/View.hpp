#ifndef VIEW_HPP
#define VIEW_HPP

#include "../Primitives/PrimitivesDataBase.hpp"

namespace View
{
    struct Panel:public Data::DataBaseListener
    {
        Panel(Data::DataBase& db_):
            db{db_}
        {}

        void elementAdded   (std::size_t id) override
        {
            db.getPrimitive(id)->paint();
        };
        void elementErased  (std::size_t id) override
        {
            db.getPrimitive(id)->paint();
        };

    private:
        Data::DataBase& db;
    };
}
#endif // VIEW_HPP

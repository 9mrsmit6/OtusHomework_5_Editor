#ifndef PRIMITIVESDATABASE_HPP
#define PRIMITIVESDATABASE_HPP

#include <memory>
#include <vector>

#include "PrimitiveEntery.hpp"

namespace Data
{

    using PrimitiveEnteryPtr = std::shared_ptr<Data::PrimitiveEntery>;
    //!Интерфейс слушателя БД
    struct DataBaseListener
    {
        virtual void elementAdded   (std::size_t id)=0;
        virtual void elementErased  (std::size_t id)=0;

    };
    //!абстрактная база данных(модель данных в удобном для отображения формате)
    struct DataBase
    {
        virtual void createCurcle(Data::Point p, unsigned int r)=0;
        virtual void createRectangle(Data::Point f, Data::Point s)=0;
        virtual void deletePrimitive(std::size_t id)=0;
        virtual PrimitiveEnteryPtr getPrimitive(std::size_t id) =0 ;
        virtual void deleteAllPrimitive() = 0;

        void registerListener(std::shared_ptr<DataBaseListener> newListener)
        {
            listeners.push_back(newListener);


            for(auto& v:listeners)
            {
                v->elementErased(11);//Todo real ID
            }
        }

    protected:
        std::vector<std::shared_ptr<DataBaseListener>> listeners;

    };


    //!Реализация базы данных
    struct PrimitivesDataBase:public DataBase
    {

        using PrimitiveEnteryArray = std::vector<PrimitiveEnteryPtr>;

        void createCurcle(Data::Point p, unsigned int r) override
        {
            array.push_back(  std::make_shared<Data::CurcleEntery>(   Data::CurcleEntery(p,r)  )   );

            for(auto& v:listeners)
            {
                v->elementAdded(11);//Todo real ID
            }
        }

        void createRectangle(Data::Point f, Data::Point s) override
        {
            array.push_back(  std::make_shared<Data::RectangleEntery>(   Data::RectangleEntery(f,s)  )   );


            for(auto& v:listeners)
            {
                v->elementAdded(11);//Todo real ID
            }
        }

        void deletePrimitive(std::size_t id) override
        {
            array.erase(array.begin()+id);
        }

        void deleteAllPrimitive() override
        {
            array.clear();
        }


        PrimitiveEnteryPtr getPrimitive(std::size_t id) override
        {
            return array[id];
        }


    private:
        PrimitiveEnteryArray array;  //DATA BASE



    };
}

#endif // PRIMITIVESDATABASE_HPP

#include <iostream>
#include "Primitives/PrimitiveEntery.hpp"
#include <vector>

#include "Primitives/PrimitivesDataBase.hpp"

using namespace std;

Data::PrimitivesDataBase db;

int main()
{
    Data::RectangleEntery v1({1,0},{1,1});
    Data::CurcleEntery v2({1,0},5);


    auto  v = std::make_shared<Data::RectangleEntery>(v1);
    auto  vv = std::make_shared<Data::CurcleEntery>(v2);


//    db.makeEntery()

    std::vector<std::shared_ptr<Data::PrimitiveEntery>> dataBase;
    dataBase.push_back(v);
    dataBase.push_back(vv);
  //  dataBase.push_back(std::make_shared<Data::PrimitiveEntery>(v2));




    cout << "Hello World!" << endl;
    return 0;
}

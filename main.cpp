#include "Primitives/PrimitivesDataBase.hpp"
#include "View/View.hpp"
#include "Editor/Editor.hpp"

using namespace std;

Data::PrimitivesDataBase db; //M
View::Panel     panel(db) ;  //V
View::Editor    editor(db);  //C

int main()
{
   return 0;
}

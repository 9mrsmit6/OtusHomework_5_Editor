cmake_minimum_required(VERSION 3.5)

project(Editor LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Editor main.cpp
    Primitives/Data/Point.hpp
    Primitives/Data/Curcle.hpp
    Primitives/Data/Rectangle.hpp
    Primitives/PrimitiveEntery.hpp
    Primitives/View/Painters.hpp
    Primitives/Export/exporters.hpp
    Primitives/PrimitivesDataBase.hpp
    View/View.hpp
    Editor/Editor.hpp
    Import/FileImporter.hpp
    Exporter/Exporter.hpp

 #   Data/Primitive.hpp
  #  Data/Curcle.hpp
  #  Data/Rectangle.hpp
  #  View/ViewJob.hpp
 #   View/Painter.hpp
  #  View/ViewPrinters.hpp
 #   View/Canvas.hpp
)

install(TARGETS Editor
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

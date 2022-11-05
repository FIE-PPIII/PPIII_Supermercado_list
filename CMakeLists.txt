cmake_minimum_required(VERSION 3.21)
project(base_cpp)

set(CMAKE_CXX_STANDARD 14)

add_executable(base_cpp main.cpp Articulo.cpp Articulo.h ArticuloStock.cpp ArticuloStock.h ArticuloVenta.cpp ArticuloVenta.h
        Caja.cpp Caja.h FechaActual.cpp FechaActual.h Supermercado.cpp Supermercado.h Venta.cpp Venta.h)

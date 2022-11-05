#include "ArticuloVenta.h"

//--------------------
// Constructor Publico
//--------------------

ArticuloVenta::ArticuloVenta(const Articulo * articulo, const int cantidad)
{
    this->articulo = articulo;
    this->cantidad = cantidad;
}

//-------------------
// Destructor Publico
//-------------------
ArticuloVenta::~ArticuloVenta()
{}


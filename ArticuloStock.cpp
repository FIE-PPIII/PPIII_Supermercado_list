#include "ArticuloStock.h"

//--------------------
// Constructor Publico
//--------------------

ArticuloStock::ArticuloStock(const Articulo * articulo, const int cantidad)
{
    this->articulo = articulo;
    this->cantidad = cantidad;
}

//-------------------
// Destructor Publico
//-------------------
ArticuloStock::~ArticuloStock()
{}

//-----------------
// Servicio Publico
//-----------------

void ArticuloStock::AumentarStock(const int cantidad)
{
	this->cantidad += cantidad;
	
	return;
}

void ArticuloStock::DisminuirStock(const int cantidad)
{
	this->cantidad -= cantidad;
	
	return;
}


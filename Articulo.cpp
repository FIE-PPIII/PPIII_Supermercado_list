#include "Articulo.h"

//--------------------
// Constructor Publico
//--------------------

Articulo::Articulo(const int codigo)
{
    this->codigo = codigo;
}

Articulo::Articulo(const int codigo, const string nombre)
{
    this->codigo = codigo;
    this->nombre = nombre;
}

Articulo::Articulo(const int codigo, const double precio)
{
    this->codigo = codigo;
    this->precio = precio;
}

Articulo::Articulo(const int codigo, const string nombre, const double precio)
{
    this->codigo = codigo;
	this->nombre = nombre;
    this->precio = precio;
}

//-------------------
// Destructor Publico
//-------------------

Articulo::~Articulo()
{}


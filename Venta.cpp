#include "Venta.h"

//-----------------
// Servicio Privado
//-----------------

void Venta::CalcularMontoVenta()
{
	int cantidad;
    double precio;
    const Articulo * articulo;
    list <ArticuloVenta>::iterator iteradorArticuloVenta;

    this->monto = 0.0;

    for (iteradorArticuloVenta = this->listaArticuloVenta.begin() ; iteradorArticuloVenta != this->listaArticuloVenta.end() ; ++iteradorArticuloVenta)
	{
		articulo = iteradorArticuloVenta->ObtenerArticulo();

		precio = articulo->ObtenerPrecio();
		cantidad = iteradorArticuloVenta->ObtenerCantidad();

        this->monto += precio * cantidad;
	}

    return;
}

//--------------------
// Constructor Publico
//--------------------

Venta::Venta(const int nroTicket)
{
	this->monto = 0.0;
    this->nroTicket = nroTicket;
    FechaActual fechaActual;
    this->fechaTicket.AsignarDD(fechaActual.ObtenerDD());
    this->fechaTicket.AsignarMM(fechaActual.ObtenerDD());
    this->fechaTicket.AsignarAAAA(fechaActual.ObtenerAAAA());
    this->fechaTicket.AsignarHH(fechaActual.ObtenerHH());
    this->fechaTicket.AsignarMI(fechaActual.ObtenerMI());
    this->fechaTicket.AsignarSS(fechaActual.ObtenerSS());
}

//-------------------
// Destructor Publico
//-------------------

Venta::~Venta()
{}

//-----------------
// Servicio Publico
//-----------------

void Venta::InsertarArticuloVenta(const Articulo * articulo, const int cantidad)
{
	ArticuloVenta articuloVenta(articulo, cantidad);

	this->listaArticuloVenta.insert(this->listaArticuloVenta.end(), articuloVenta);

	this->CalcularMontoVenta();

	return;
}

void Venta::BorrarArticuloVenta(const Articulo * articulo)
{
    list <ArticuloVenta>::iterator iteradorArticuloVenta;

    for (iteradorArticuloVenta = this->listaArticuloVenta.begin() ; iteradorArticuloVenta != this->listaArticuloVenta.end() ; ++iteradorArticuloVenta)
	{
		if (iteradorArticuloVenta->ObtenerArticulo()->ObtenerCodigo() == articulo->ObtenerCodigo())
		{
			listaArticuloVenta.erase(iteradorArticuloVenta);

			this->CalcularMontoVenta();
		}
	}

	return;
}


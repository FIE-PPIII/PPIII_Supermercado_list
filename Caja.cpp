#include "Caja.h"

//-----------------
// Servicio Privado
//-----------------

void Caja::CalcularMontoCaja()
{
    double monto;
            
    this->monto = 0.0;
    
    list <Venta>::const_iterator iteradorVenta;

    for (iteradorVenta = this->listaVenta.begin() ; iteradorVenta != this->listaVenta.end() ; ++iteradorVenta)
	{
        this->monto += iteradorVenta->ObtenerMontoVenta();
	}

    return;
}

//--------------------
// Constructor Publico
//--------------------

Caja::Caja(const int nroCaja)
{
    this->nroCaja = nroCaja;
    this->monto = 0.0;
}

//-------------------
// Destructor Publico
//-------------------

Caja::~Caja()
{}

//-----------------
// Servicio Publico
//-----------------

void Caja::InsertarVenta(const Venta & venta)
{
	this->listaVenta.insert(this->listaVenta.end(), venta);

	this->CalcularMontoCaja();

	return;
}

void Caja::BorrarVenta(const int nroTicket)
{
    list <Venta>::iterator iteradorVenta;

    for (iteradorVenta = this->listaVenta.begin() ; iteradorVenta != this->listaVenta.end() ; ++iteradorVenta)
	{
		if (iteradorVenta->ObtenerNroTicket() == nroTicket)
		{
			listaVenta.erase(iteradorVenta);

			this->CalcularMontoCaja();
		}
	}

	return;
}


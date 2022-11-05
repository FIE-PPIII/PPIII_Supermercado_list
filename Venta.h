#ifndef __VENTA_H__

	#define __VENTA_H__
	
	#include <List>

	#include "FechaActual.h"
	#include "ArticuloVenta.h"

	using namespace std;

    class Venta
    {
		private:

			//-------------
			// Dato Privado
			//-------------

			int nroTicket;
			FechaActual fechaTicket;
			double monto;
        	list <ArticuloVenta> listaArticuloVenta;

			//-----------------
			// Servicio Privado
			//-----------------

			void CalcularMontoVenta();

		public:

			//--------------------
			// Constructor Publico
			//--------------------

        	Venta(const int);

			//-------------------
			// Destructor Publico
			//-------------------

			~Venta();

			//-------------------------
			// Asignar Atributo Publico
			//-------------------------

			void AsignarNroTicket(const int);

			//-------------------------
			// Obtener Atributo Publico
			//-------------------------

			int ObtenerNroTicket() const;
			const list <ArticuloVenta> & ObtenerListaArticuloVenta() const;
			double ObtenerMontoVenta() const;

			//-----------------
			// Servicio Publico
			//-----------------

			void InsertarArticuloVenta(const Articulo *, const int);
			void BorrarArticuloVenta(const Articulo *);
	};

	//-------------------------
	// Asignar Atributo Publico
	//-------------------------

 	inline void Venta::AsignarNroTicket(const int nroTicket)
    {
        this->nroTicket = nroTicket;

		return;
    }

	//-------------------------
	// Obtener Atributo Publico
	//-------------------------

    inline int Venta::ObtenerNroTicket() const
    {
		return this->nroTicket;
	}

    inline const list <ArticuloVenta> & Venta::ObtenerListaArticuloVenta() const
    {
        return this->listaArticuloVenta;
    }

    inline double Venta::ObtenerMontoVenta() const
    {
		return this->monto;
	}

#endif


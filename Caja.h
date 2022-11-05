#ifndef __CAJA_H__

	#define __CAJA_H__

	#include <string>
	#include <List>
	
	#include "Venta.h"

	using namespace std;

    class Caja
    {
		private:

			//-------------
			// Dato Privado
			//-------------

			int nroCaja;
			double monto;
        	list <Venta> listaVenta;

			//-----------------
			// Servicio Privado
			//-----------------

			void CalcularMontoCaja();

		public:

			//--------------------
			// Constructor Publico
			//--------------------

        	Caja(const int);

			//-------------------
			// Destructor Publico
			//-------------------

			~Caja();

			//-------------------------
			// Asignar Atributo Publico
			//-------------------------

			void AsignarNroCaja(const int);

			//-------------------------
			// Obtener Atributo Publico
			//-------------------------

			int ObtenerNroCaja() const;
			const list <Venta> & ObtenerListaVenta() const;
			double ObtenerMontoCaja() const;

			//-----------------
			// Servicio Privado
			//-----------------

			void InsertarVenta(const Venta &);
			void BorrarVenta(const int);
	};

	//-------------------------
	// Asignar Atributo Publico
	//-------------------------

 	inline void Caja::AsignarNroCaja(const int nroCaja)
    {
        this->nroCaja = nroCaja;

		return;
    }

	//-------------------------
	// Obtener Atributo Publico
	//-------------------------

    inline int Caja::ObtenerNroCaja() const
    {
		return this->nroCaja;
	}

    inline const list <Venta> & Caja::ObtenerListaVenta() const
    {
        return this->listaVenta;
    }

    inline double Caja::ObtenerMontoCaja() const
    {
		return this->monto;
	}

#endif


#ifndef __SUPERMERCADO_H__

	#define __SUPERMERCADO_H__

	#include <string>
	#include <List>
	#include <vector>

	#include "Articulo.h"
	#include "ArticuloStock.h"
	#include "Caja.h"
	#include "Venta.h"

	using namespace std;
	
	const int CAJAS = 5;

    class Supermercado
    {
		private:

			//-------------
			// Dato Privado
			//-------------

        	string nombre;
        	string direccion;
        	list <Articulo> listaArticulo;
        	list <ArticuloStock> listaArticuloStock;
        	vector <Caja> vectorCaja;

			//-----------------
			// Servicio Privado
			//-----------------

			const Articulo * BuscarArticulo(const int codigo);
			const Articulo * BuscarArticulo(const string nombre);
			ArticuloStock * BuscarArticuloStock(const Articulo *);
			ArticuloStock * BuscarArticuloStock(const string nombre);

		public:

			//--------------------
			// Constructor Publico
			//--------------------

        	Supermercado(const string, const string);

			//-------------------
			// Destructor Publico
			//-------------------

			~Supermercado();

			//-------------------------
			// Asignar Atributo Publico
			//-------------------------

			void AsignarNombre(const string);
			void AsignarDireccion(const string);

			//-------------------------
			// Obtener Atributo Publico
			//-------------------------

			string ObtenerNombre() const;
			string ObtenerDireccion() const;
			const list <Articulo> & ObtenerListaArticulo() const;
			const list <ArticuloStock> & ObtenerListaArticuloStock() const;
			const vector <Caja> & ObtenerVectorCaja() const;

			//-----------------
			// Servicio Publico
			//-----------------

        	void IngresarListaArticuloEstatico();
			void IngresarArticuloVentaDiaEstatico();
			void MostrarListaArticulo(const string);
			void MostrarListaArticuloStock(const string);
			void MostrarMontoCaja(const string);
			void MostrarCantidadArticuloVendidoCaja(const string);
			void MostrarMontoTotal(const string);
	};

	//-------------------------
	// Asignar Atributo Publico
	//-------------------------

    inline void Supermercado::AsignarNombre(const string nombre)
    {
		this->nombre = nombre;

		return;
	}

    inline void Supermercado::AsignarDireccion(const string direccion)
    {
        this->direccion = direccion;

		return;
    }

	//-------------------------
	// Obtener Atributo Publico
	//-------------------------

    inline string Supermercado::ObtenerNombre() const
    {
		return this->nombre;
	}

    inline string Supermercado::ObtenerDireccion() const
    {
        return this->direccion;
    }

    inline const list <Articulo> & Supermercado::ObtenerListaArticulo() const
    {
        return this->listaArticulo;
    }

    inline const list <ArticuloStock> & Supermercado::ObtenerListaArticuloStock() const
    {
        return this->listaArticuloStock;
    }

    inline const vector <Caja> & Supermercado::ObtenerVectorCaja() const
    {
        return this->vectorCaja;
    }

#endif


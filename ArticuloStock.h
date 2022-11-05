#ifndef __ARTICULO_STOCK_H__

	#define __ARTICULO_STOCK_H__
	
	#include "Articulo.h"

    class ArticuloStock
    {
		private:

			//-------------
			// Dato Privado
			//-------------

			const Articulo * articulo;
			int cantidad;

		public:

			//--------------------
			// Constructor Publico
			//--------------------

        	ArticuloStock(const Articulo *, const int);

			//-------------------
			// Destructor Publico
			//-------------------

			~ArticuloStock();

			//-------------------------
			// Asignar Atributo Publico
			//-------------------------

			void AsignarCantidad(const int);

			//-------------------------
			// Obtener Atributo Publico
			//-------------------------

			const Articulo * ObtenerArticulo() const;
			int ObtenerCantidad() const;

			//-----------------
			// Servicio Publico
			//-----------------

			void AumentarStock(const int);
			void DisminuirStock(const int);
	};

	//-------------------------
	// Asignar Atributo Publico
	//-------------------------

    inline void ArticuloStock::AsignarCantidad(const int cantidad)
    {
        this->cantidad = cantidad;

		return;
    }

	//-------------------------
	// Obtener Atributo Publico
	//-------------------------

 	inline const Articulo * ArticuloStock::ObtenerArticulo() const
    {
        return this->articulo;
    }

    inline int ArticuloStock::ObtenerCantidad() const
    {
        return this->cantidad;
    }

#endif


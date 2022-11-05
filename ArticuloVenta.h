#ifndef __ARTICULO_VENTA_H__

	#define __ARTICULO_VENTA_H__
	
	#include "Articulo.h"

    class ArticuloVenta
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

        	ArticuloVenta(const Articulo *, const int);

			//-------------------
			// Destructor Publico
			//-------------------

			~ArticuloVenta();

			//-------------------------
			// Asignar Atributo Publico
			//-------------------------

			void AsignarCantidad(const int);

			//-------------------------
			// Obtener Atributo Publico
			//-------------------------

			const Articulo * ObtenerArticulo() const;
			int ObtenerCantidad() const;
	};

	//-------------------------
	// Asignar Atributo Publico
	//-------------------------

    inline void ArticuloVenta::AsignarCantidad(const int cantidad)
    {
        this->cantidad = cantidad;

		return;
    }

	//-------------------------
	// Obtener Atributo Publico
	//-------------------------

 	inline const Articulo * ArticuloVenta::ObtenerArticulo() const
    {
        return this->articulo;
    }

    inline int ArticuloVenta::ObtenerCantidad() const
    {
        return this->cantidad;
    }

#endif


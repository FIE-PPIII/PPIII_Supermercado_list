#ifndef __ARTICULO_H__

	#define __ARTICULO_H__

	#include <string>

	using namespace std;

    class Articulo
    {
		private:

			//-------------
			// Dato Privado
			//-------------

			int codigo;
			string nombre;
			double precio;

		public:

			//--------------------
			// Constructor Publico
			//--------------------

        	Articulo(const int);
        	Articulo(const int, const string);
        	Articulo(const int, const double);
        	Articulo(const int, const string, const double);

			//-------------------
			// Destructor Publico
			//-------------------

			~Articulo();

			//-------------------------
			// Asignar Atributo Publico
			//-------------------------

			void AsignarCodigo(const int);
			void AsignarNombre(const string);
			void AsignarPrecio(const double);

			//-------------------------
			// Obtener Atributo Publico
			//-------------------------

			int ObtenerCodigo() const;
			string ObtenerNombre() const;
			double ObtenerPrecio() const;
	};

	//-------------------------
	// Asignar Atributo Publico
	//-------------------------

 	inline void Articulo::AsignarCodigo(const int codigo)
    {
        this->codigo = codigo;

		return;
    }

    inline void Articulo::AsignarNombre(const string nombre)
    {
		this->nombre = nombre;

		return;
	}

    inline void Articulo::AsignarPrecio(const double precio)
    {
        this->precio = precio;

		return;
    }

	//-------------------------
	// Obtener Atributo Publico
	//-------------------------

 	inline int Articulo::ObtenerCodigo() const
    {
        return this->codigo;
    }

    inline string Articulo::ObtenerNombre() const
    {
		return this->nombre;
	}

    inline double Articulo::ObtenerPrecio() const
    {
        return this->precio;
    }

#endif


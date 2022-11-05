
/*
#include <time.h>
struct tm* localtime(const time_t* timer);

Descripción:

La función acepta un puntero a un tipo time_t, que contiene una fecha expresada en segundos desde el inicio de la época UNIX, y devuelve un puntero a una estructura tm  cuyos miembros contienen información sobre la fecha introducida. Sus miembros son sobreescritos con cada invocación a la función.

Ejemplo:

#include <iostream>
using namespace std;
#include <ctime>

int main() 
{            // =================
   char* dS[7] = {"Domingo","Lunes","Martes","Miercoles",

                  "Jueves","Viernes","Sabado"};
   time_t tSac = time(NULL);       // instante actual
   struct tm* tmP = localtime(&tSac);

   cout << "hh:mm:ss " << tmP->tm_hour << ":" << tmP->tm_min << ":"
                       << tmP->tm_sec << endl;
   cout << "dd-mm-aaaa: " << tmP->tm_mday << "-" << tmP->tm_mon+1 << "-"
                          << tmP->tm_year+1900 << endl;
   cout << "Dia de semana: " << dS[tmP->tm_wday] << endl;
   cout << "Dia del año: " << tmP->tm_yday << endl;
   cout << "Horario de verano: " << (tmP->tm_isdst ? "Si" : "No") << endl;
   return 0;
}

Salida:

hh:mm:ss 11:13:23
dd-mm-aaaa: 22-5-2003
Dia de semana: Jueves
Dia del año: 141
Horario de verano: Si
*/

#ifndef __FECHAACTUAL_H__

	#define __FECHAACTUAL_H__

	#include <iostream>
	#include <ctime>

	using namespace std;

    class FechaActual
    {
		private:

			//-------------
			// Dato Privado
			//-------------

			int dd;
			int mm;
			int aaaa;
			int hh;
			int mi;
			int ss;

		public:

			//--------------------
			// Constructor Publico
			//--------------------

        	FechaActual();

			//-------------------
			// Destructor Publico
			//-------------------

			~FechaActual();

			//-------------------------
			// Asignar Atributo Publico
			//-------------------------

			void AsignarDD(const int);
			void AsignarMM(const int);
			void AsignarAAAA(const int);
			void AsignarHH(const int);
			void AsignarMI(const int);
			void AsignarSS(const int);

			//-------------------------
			// Obtener Atributo Publico
			//-------------------------

			int ObtenerDD() const;
			int ObtenerMM() const;
			int ObtenerAAAA() const;
			int ObtenerHH() const;
			int ObtenerMI() const;
			int ObtenerSS() const;
	};

	//-------------------------
	// Asignar Atributo Publico
	//-------------------------

 	inline void FechaActual::AsignarDD(const int dd)
    {
        this->dd = dd;

		return;
    }

 	inline void FechaActual::AsignarMM(const int mm)
    {
        this->mm = mm;

		return;
    }

 	inline void FechaActual::AsignarAAAA(const int aaaa)
    {
        this->aaaa = aaaa;

		return;
    }

 	inline void FechaActual::AsignarHH(const int hh)
    {
        this->hh = hh;

		return;
    }

 	inline void FechaActual::AsignarMI(const int mi)
    {
        this->mi = mi;

		return;
    }

 	inline void FechaActual::AsignarSS(const int ss)
    {
        this->ss = ss;

		return;
    }

	//-------------------------
	// Obtener Atributo Publico
	//-------------------------

 	inline int FechaActual::ObtenerDD() const 
    {
        return this->dd;
    }

    inline int FechaActual::ObtenerMM() const
    {
		return this->mm;
	}

    inline int FechaActual::ObtenerAAAA() const
    {
        return this->aaaa;
    }

 	inline int FechaActual::ObtenerHH() const 
    {
        return this->hh;
    }

    inline int FechaActual::ObtenerMI() const
    {
		return this->mi;
	}

    inline int FechaActual::ObtenerSS() const
    {
        return this->ss;
    }

#endif


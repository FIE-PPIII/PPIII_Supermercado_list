#include "Supermercado.h"

//-----------------
// Servicio Privado
//-----------------

const Articulo * Supermercado::BuscarArticulo(const int codigo)
{
	list <Articulo>::const_iterator iteradorArticulo;

    for (iteradorArticulo = this->listaArticulo.begin() ; iteradorArticulo != this->listaArticulo.end() ; ++iteradorArticulo)
	{
		if (iteradorArticulo->ObtenerCodigo() == codigo)
		{
			const Articulo * articulo = &(*iteradorArticulo);

			return articulo;
		}
	}

	return NULL;
}

const Articulo * Supermercado::BuscarArticulo(const string nombre)
{
    list <Articulo>::const_iterator iteradorArticulo;

    for (iteradorArticulo = this->listaArticulo.begin() ; iteradorArticulo != this->listaArticulo.end() ; ++iteradorArticulo)
	{
		if (iteradorArticulo->ObtenerNombre() == nombre)
		{
			const Articulo * articulo = &(*iteradorArticulo);

			return articulo;
		}
	}

	return NULL;
}

ArticuloStock * Supermercado::BuscarArticuloStock(const Articulo * articulo)
{
	list <ArticuloStock>::iterator iteradorArticuloStock;

    for (iteradorArticuloStock = this->listaArticuloStock.begin() ; iteradorArticuloStock != this->listaArticuloStock.end() ; ++iteradorArticuloStock)
	{
		if (iteradorArticuloStock->ObtenerArticulo()->ObtenerCodigo() == articulo->ObtenerCodigo())
		{
			ArticuloStock * articuloStock = &(*iteradorArticuloStock);

			return articuloStock;
		}
	}

	return NULL;
}

ArticuloStock * Supermercado::BuscarArticuloStock(const string nombre)
{
	list <ArticuloStock>::iterator iteradorArticuloStock;

    for (iteradorArticuloStock = this->listaArticuloStock.begin() ; iteradorArticuloStock != this->listaArticuloStock.end() ; ++iteradorArticuloStock)
	{
		const Articulo * articulo = this->BuscarArticulo(iteradorArticuloStock->ObtenerArticulo()->ObtenerCodigo());

		if (articulo->ObtenerNombre() == nombre)
		{
			ArticuloStock * articuloStock = &(*iteradorArticuloStock);

			return articuloStock;
		}
	}

	return NULL;
}

//--------------------
// Constructor Publico
//--------------------

Supermercado::Supermercado(const string nombre, const string direccion)
{
    this->nombre = nombre;
    this->direccion = direccion;

    Caja caja_1(1);
    this->vectorCaja.push_back(caja_1);

    Caja caja_2(2);
    this->vectorCaja.push_back(caja_2);

    Caja caja_3(3);
    this->vectorCaja.push_back(caja_3);

    Caja caja_4(4);
    this->vectorCaja.push_back(caja_4);

    Caja caja_5(5);
    this->vectorCaja.push_back(caja_5);
}

//-------------------
// Destructor Publico
//-------------------

Supermercado::~Supermercado()
{}

//-----------------
// Servicio Publico
//-----------------

void Supermercado::IngresarListaArticuloEstatico()
{
    int codigo;
    string nombre;
    double precio;
    int cantidad;

    codigo = 2323;
    nombre = "Leche";
    precio = 63.14;

	Articulo * articulo_1 = new Articulo(codigo, nombre, precio);

	this->listaArticulo.insert(this->listaArticulo.end(), *articulo_1);

    cantidad = 30;
    
	ArticuloStock articuloStock_1(articulo_1, cantidad);

	this->listaArticuloStock.insert(this->listaArticuloStock.end(), articuloStock_1);

    codigo = 4545;
    nombre = "Manteca";
    precio = 87.23;

    Articulo * articulo_2 = new Articulo(codigo, nombre, precio);

	this->listaArticulo.insert(this->listaArticulo.end(), *articulo_2);

    cantidad = 45;
	
	ArticuloStock articuloStock_2(articulo_2, cantidad);

    this->listaArticuloStock.insert(this->listaArticuloStock.end(), articuloStock_2);

	codigo = 1212;
    nombre = "Jugo";
    precio = 52.28;

    Articulo * articulo_3 = new Articulo(codigo, nombre, precio);
	
	this->listaArticulo.insert(this->listaArticulo.end(), *articulo_3);

    cantidad = 92;

    ArticuloStock articuloStock_3(articulo_3, cantidad);

    this->listaArticuloStock.insert(this->listaArticuloStock.end(), articuloStock_3);

    return;
}

void Supermercado::IngresarArticuloVentaDiaEstatico()
{
	int nroCaja;
	int nroTicket;
    int cantidad;
    const Articulo * articulo;
    ArticuloStock * articuloStock;

	nroCaja = 1;

    nroTicket = 34262;

    Venta venta_1(nroTicket);

	articulo = this->BuscarArticulo("Leche");

    if (articulo != NULL)
    {
        articuloStock = this->BuscarArticuloStock(articulo);

        if (articuloStock != NULL)
        {
            cantidad = 3;

            articuloStock->DisminuirStock(cantidad);

            venta_1.InsertarArticuloVenta(articulo, cantidad);

			articulo = this->BuscarArticulo("Manteca");

    		if (articulo != NULL)
    		{
        		articuloStock = this->BuscarArticuloStock(articulo);

        		if (articuloStock != NULL)
        		{
            		cantidad = 2;

            		articuloStock->DisminuirStock(cantidad);

            		venta_1.InsertarArticuloVenta(articulo, cantidad);

            		this->vectorCaja[nroCaja - 1].InsertarVenta(venta_1);
            	}
            }
        }
    }

	nroCaja = 1;

	nroTicket = 5421;

    Venta venta_2(nroTicket);

    articulo = this->BuscarArticulo("Leche");

    if (articulo != NULL)
    {
        articuloStock = this->BuscarArticuloStock(articulo);

        if (articuloStock != NULL)
        {
            cantidad = 2;

            articuloStock->DisminuirStock(cantidad);

            venta_2.InsertarArticuloVenta(articulo, cantidad);

            this->vectorCaja[nroCaja - 1].InsertarVenta(venta_2);
        }
    }

    nroCaja = 3;

	nroTicket = 1423;

    Venta venta_3(nroTicket);

    articulo = this->BuscarArticulo("Leche");

    if (articulo != NULL)
    {
        articuloStock = this->BuscarArticuloStock(articulo);

        if (articuloStock != NULL)
        {
            cantidad = 4;

            articuloStock->DisminuirStock(cantidad);

            venta_3.InsertarArticuloVenta(articulo, cantidad);

            this->vectorCaja[nroCaja - 1].InsertarVenta(venta_3);
        }
    }

	nroCaja = 2;

    nroTicket = 978;

    Venta venta_4(nroTicket);

   	articulo = this->BuscarArticulo("Manteca");

    if (articulo != NULL)
    {
        articuloStock = this->BuscarArticuloStock(articulo);

        if (articuloStock != NULL)
        {
            cantidad = 2;

            articuloStock->DisminuirStock(cantidad);

            venta_4.InsertarArticuloVenta(articulo, cantidad);

            this->vectorCaja[nroCaja - 1].InsertarVenta(venta_4);
        }
	}

    nroCaja = 2;

    nroTicket = 1075;

    Venta venta_5(nroTicket);

   	articulo = this->BuscarArticulo("Manteca");

    if (articulo != NULL)
    {
        articuloStock = this->BuscarArticuloStock(articulo);

        if (articuloStock != NULL)
        {
            cantidad = 1;

            articuloStock->DisminuirStock(cantidad);

            venta_5.InsertarArticuloVenta(articulo, cantidad);

            this->vectorCaja[nroCaja - 1].InsertarVenta(venta_5);
        }
    }

    nroCaja = 4;
    
    nroTicket = 1123;

    Venta venta_6(nroTicket);

   	articulo = this->BuscarArticulo("Manteca");

    if (articulo != NULL)
    {
        articuloStock = this->BuscarArticuloStock(articulo);

        if (articuloStock != NULL)
        {
            cantidad = 2;

            articuloStock->DisminuirStock(cantidad);

            venta_6.InsertarArticuloVenta(articulo, cantidad);

            this->vectorCaja[nroCaja - 1].InsertarVenta(venta_6);
        }
    }

    nroCaja = 1;

    nroTicket = 1251;

    Venta venta_7(nroTicket);

   	articulo = this->BuscarArticulo("Jugo");

    if (articulo != NULL)
    {
        articuloStock = this->BuscarArticuloStock(articulo);

        if (articuloStock != NULL)
        {
            cantidad = 2;

            articuloStock->DisminuirStock(cantidad);

            venta_7.InsertarArticuloVenta(articulo, cantidad);

            this->vectorCaja[nroCaja - 1].InsertarVenta(venta_7);
        }
    }

    return;
}

void Supermercado::MostrarListaArticulo(const string mensaje)
{
	list <Articulo>::const_iterator iteradorArticulo;

	cout << mensaje << endl;

    for (iteradorArticulo = this->listaArticulo.begin() ; iteradorArticulo != this->listaArticulo.end() ; ++iteradorArticulo)
	{
		cout << "Codigo: " <<  iteradorArticulo->ObtenerCodigo() << " - articulo: " << iteradorArticulo->ObtenerNombre() << " - precio: " << iteradorArticulo->ObtenerPrecio() << endl;
	}
	
	return;
}

void Supermercado::MostrarListaArticuloStock(const string mensaje)
{
	list <ArticuloStock>::const_iterator iteradorArticuloStock;

	cout << mensaje << endl;

    for (iteradorArticuloStock = this->listaArticuloStock.begin() ; iteradorArticuloStock != this->listaArticuloStock.end() ; ++iteradorArticuloStock)
	{
		const Articulo * articulo = this->BuscarArticulo(iteradorArticuloStock->ObtenerArticulo()->ObtenerCodigo());

		cout << "Codigo: " <<  articulo->ObtenerCodigo() << " - articulo: " << articulo->ObtenerNombre() << " - cantidad: " << iteradorArticuloStock->ObtenerCantidad() << endl;
	}

	return;
}

void Supermercado::MostrarMontoCaja(const string mensaje)
{
	cout << mensaje << endl;

    for (int indice = 0 ; indice < CAJAS ; indice++)
    {
		cout << "Caja: " <<  this->vectorCaja[indice].ObtenerNroCaja() << " - monto: " << this->vectorCaja[indice].ObtenerMontoCaja() << endl;
	}

    return;
}

void Supermercado::MostrarCantidadArticuloVendidoCaja(const string mensaje)
{
    int cantidadTotal;
	list <Venta>::const_iterator iteradorVenta;
	list <ArticuloVenta>::const_iterator iteradorArticuloVenta;
	const Articulo * articulo;

	cout << mensaje << endl;
	
	cantidadTotal = 0;

    for (int indice = 0; indice < CAJAS; indice++)
    {
        cout << "Caja: " << this->vectorCaja[indice].ObtenerNroCaja() << endl;

    	for (iteradorVenta = this->vectorCaja[indice].ObtenerListaVenta().begin() ; iteradorVenta != this->vectorCaja[indice].ObtenerListaVenta().end() ; ++iteradorVenta)
		{
            cantidadTotal = 0;

			cout << "NroTicket: " <<  iteradorVenta->ObtenerNroTicket() << endl;

			for (iteradorArticuloVenta = iteradorVenta->ObtenerListaArticuloVenta().begin() ; iteradorArticuloVenta != iteradorVenta->ObtenerListaArticuloVenta().end() ; ++iteradorArticuloVenta)
			{
				articulo = iteradorArticuloVenta->ObtenerArticulo();

    			if (articulo != NULL)
    			{
					cout << "Articulo: " <<  articulo->ObtenerCodigo() << " - nombre: " << articulo->ObtenerNombre() << " - cantidad: " << iteradorArticuloVenta->ObtenerCantidad() << endl;

                	cantidadTotal += iteradorArticuloVenta->ObtenerCantidad();
                }
            }

            cout << "NroTicket: " <<  iteradorVenta->ObtenerNroTicket() << " - cantidad: " << cantidadTotal << endl;
        }
	}
	
	return;
}

void Supermercado::MostrarMontoTotal(const string mensaje)
{
    double monto;

    monto = 0.0;

	cout << mensaje << endl;

    for (int indice = 0; indice < CAJAS; indice++)
    {
        monto += this->vectorCaja[indice].ObtenerMontoCaja();
    }

    cout << "\nMonto Total Supermercado: " << monto << endl;

    return;
}


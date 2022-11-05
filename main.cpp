#include <iostream>

#include "Supermercado.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv)
{
    Supermercado supermercado("Manolo", "Callo 653");

    supermercado.IngresarListaArticuloEstatico();

    supermercado.MostrarListaArticulo("\nDatos de los articulos");

    supermercado.MostrarListaArticuloStock("\nDatos del Stock de los articulos");

    supermercado.IngresarArticuloVentaDiaEstatico();

    supermercado.MostrarMontoCaja("\nMonto Caja");

    supermercado.MostrarCantidadArticuloVendidoCaja("\nMostrar Articulos Vendidos por caja");

    supermercado.MostrarMontoTotal("\nMostrar Total Vendido");

    supermercado.MostrarListaArticuloStock("\nDatos del Stock de los articulos");

    return 0;
}

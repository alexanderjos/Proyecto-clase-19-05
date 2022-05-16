#include <iostream>

using namespace std;

struct cliente{
    string nombres;
    string apellidos;
    string dni;
    string genero;
    string consulta;
};

struct nodoCliente{
    cliente *cli;
    nodoCliente *sgte;
};

struct listaClientes{
    nodoCliente *cab;
    unsigned short nclie;
};

struct atencion{
    string nroTicket;
    string nombreCliente;
    string apellidosCliente;
    string dni;
    string fecha;
};

struct nodoAtencion{
    atencion *info;
    nodoAtencion *sgte;
};

struct colaAtencion{
    nodoAtencion *delante;
    nodoAtencion *atras;
    unsigned short nAt;
};

struct tienda{
    string nombre;
    string rubro;
    string ruc;
    string web;
    colaAtencion *cA;
    listaClientes *lC;
    string propietario;
    pilaProductos *pP;      // en el almacen
    listaProductos *lP;     // en exhibicion
};

struct nodoTienda{
    nodoTienda *sgte;
    nodoTienda *ant;
    tienda *info;
};

struct listaTienda{
    unsigned short nTiendas;
    nodoTienda *cab;
};

struct informacion{
    string nombre;
    string direccion;
    string ruc;
    string web;
    string mail;
};

struct centroComercial{
    informacion *info;
    listaTienda *lT;
};


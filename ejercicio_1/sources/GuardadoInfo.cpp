#include "../include/GuardadoInfo.hpp"

GuardadoInfo::GuardadoInfo() : posicion(), presion() {};
GuardadoInfo::GuardadoInfo(const Posicion &posicion, const Presion &presion) : posicion(posicion),
                                                                               presion(presion) {};
void GuardadoInfo::serializar(ofstream &salida)
{
    posicion.serializar(salida);
    presion.serializar(salida);
}

void GuardadoInfo::deserializar(ifstream &entrada)
{
    posicion.desearilizar(entrada);
    presion.desearilizar(entrada);
}

void GuardadoInfo::imprimir()
{
    posicion.imprimir();
    presion.imprimir();
}
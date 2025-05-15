#include "../include/Mediciones.hpp"
#include <fstream>

//_________________clase Base: MedicionBase
MedicionBase::MedicionBase(float tiempo)
{
    tiempo_medicion_ptr = make_unique<float>(tiempo);
}

MedicionBase::MedicionBase(const MedicionBase &original)
{
    // cuando hago una
    this->tiempo_medicion_ptr = make_unique<float>(*(original.tiempo_medicion_ptr));
}

void MedicionBase::serializar(ofstream &salida)
{
    salida.write(reinterpret_cast<char *>(tiempo_medicion_ptr.get()), sizeof(*tiempo_medicion_ptr));
}
void MedicionBase::desearilizar(ifstream &entrada)
{
    tiempo_medicion_ptr = make_unique<float>();
    // la cantidad a leer es el tamaño del float
    entrada.read(reinterpret_cast<char *>(tiempo_medicion_ptr.get()), sizeof(*tiempo_medicion_ptr));
}

float MedicionBase::get_tiempo()
{
    return *tiempo_medicion_ptr;
}

//_____________________clase derivada: Presion_________________-

Presion::Presion(float p_estatica, float p_dinamica, float tiempo) : MedicionBase(tiempo),
                                                                     presion_estatica(p_estatica),
                                                                     presion_dinamica(p_dinamica) {}

void Presion::imprimir()
{
    cout<<"Tiempo: "<<*tiempo_medicion_ptr<<endl;
    cout<<"Información de la presión:"<<endl;
    cout << "Presión estática: " << presion_estatica << endl;
    cout << "Presión dinámica: " << presion_dinamica << endl;
}

void Presion::serializar(ofstream &salida)
{
    // serializo primero la clase base
    MedicionBase::serializar(salida);
    // serialzacion de la clase derivada
    salida.write(reinterpret_cast<char *>(&presion_estatica), sizeof(presion_estatica));
    salida.write(reinterpret_cast<char *>(&presion_dinamica), sizeof(presion_dinamica));
}

void Presion::desearilizar(ifstream &entrada)
{
    MedicionBase::desearilizar(entrada);
    entrada.read(reinterpret_cast<char *>(&presion_estatica), sizeof(presion_estatica));
    entrada.read(reinterpret_cast<char *>(&presion_dinamica), sizeof(presion_dinamica));
}

//___________________clase derivada: Posicion__________________________
Posicion::Posicion(float latitud, float longitud, float altitud, float tiempo) : MedicionBase(tiempo),
                                                                                 latitud(latitud),
                                                                                 longitud(longitud),
                                                                                 altitud(altitud) {}

void Posicion::imprimir(){
    cout<<"Tiempo: "<<*tiempo_medicion_ptr<<endl;
    cout<<"Información de posición: "<<endl;
    cout<<"Latitud: "<<latitud<<endl;
    cout<<"Longitud: "<<longitud<<endl;
    cout<<"Altitud: "<<altitud<<endl;
}                                                                                 
void Posicion::serializar(ofstream &salida)
{
    // serializo primero la clase base
    MedicionBase::serializar(salida);
    // serialzacion de la clase derivada
    salida.write(reinterpret_cast<char *>(&latitud), sizeof(latitud));
    salida.write(reinterpret_cast<char *>(&longitud), sizeof(longitud));
    salida.write(reinterpret_cast<char *>(&altitud), sizeof(altitud));
}

void Posicion::desearilizar(ifstream &entrada)
{
    MedicionBase::desearilizar(entrada);
    entrada.read(reinterpret_cast<char *>(&latitud), sizeof(latitud));
    entrada.read(reinterpret_cast<char *>(&longitud), sizeof(longitud));
    entrada.read(reinterpret_cast<char *>(&altitud), sizeof(altitud));
}
#pragma once
#include "IMediciones.hpp"
#include <memory>
using namespace std;
class MedicionBase : public IMedicionaes
{
protected:
    unique_ptr<float> tiempo_medicion_ptr; ///> Puntero que contine el tiempo en el que se tomó la medicion
public:

    MedicionBase(float timepo);
    MedicionBase (const MedicionBase& original);

    void serializar(ofstream &salida) override;
    void desearilizar(ifstream &entrdada) override;
    float get_tiempo();
    //sobre escrita por las derivadas
    virtual void imprimir() = 0;
};

class Presion : public MedicionBase
{
public:
    float presion_estatica;
    float presion_dinamica;

    Presion(float p_estatica = 0, float p_dinamica = 0, float tiempo = 0);
    //fucniones propias de la clase
    void imprimir() override;
    void serializar(ofstream &salida) override;
    void desearilizar(ifstream &entrdada) override;
};

class Posicion : public MedicionBase
{
public:
    float latitud;
    float longitud;
    float altitud;

    Posicion(float latitud =0 , float longitud = 0, float altitud = 0, float tiempo = 0);
    //fucniones propias de la clase
    void imprimir() override;
    void serializar(ofstream &salida) override;
    void desearilizar(ifstream &entrdada) override;
};

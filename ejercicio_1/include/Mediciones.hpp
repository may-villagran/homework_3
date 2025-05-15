#include "IMediciones.hpp"
#include <memory>
using namespace std;
class MedicionBase: public IMedicionaes{
    protected:
        unique_ptr<float> tiempo_medicion; ///> Puntero que contine el tiempo en el que se tomó la medicion
    public:
        void serializar( ofstream & salida)override;
        void deserealizar(ifstream& entrdada)override;
        float get_tiempo();
        virtual void imprimir() = 0;
};



class Presion:public MedicionBase{
    public:        
        float presion_estatica;
        float presion_dinamica;
        
        Presion(float p_estatica , float p_dinamica, float tiempo);
        void imprimir()override;

};

class Posicion: public MedicionBase{
    public:
        float latitud;
        float longitud;
        float altitud;

        Posicion(float latitud, float longitud, float altitud, float tiempo);
        void imprimir()override;
};






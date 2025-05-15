#include "Mediciones.hpp"
class GuardadoInfo{
    public:
        /*
        La clase GuardadoInfo si tiene ownership sobre los datos
        Cuando le paso al constructor las referencias de los objetos
        al instanciar la clase va a copiar los valores
        >Las clases derivadas tiene un unique 
        */
       Presion presicion;
       Posicion posicion;

        GuardadoInfo(const Posicion & posicion, const Presion& presion);
        void serializar(ofstream& salida);
        void deserializar(ifstream& entrada);
        void imprimir();
};
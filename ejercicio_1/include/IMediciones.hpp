#include <iostream>
using namespace std;
class IMedicionaes{
    public:
        //método virtual que deben aplicar las clases
        //se pasa por referencia un objeto ofstream
        virtual void serializar( ofstream & salida)  = 0;
        //metodo virtual puro para poder recuperar el tipo
        virtual void deserealizar(ifstream& entrdada) = 0;
};



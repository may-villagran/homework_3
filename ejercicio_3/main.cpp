#include "./include/clases.hpp"
#include <iostream>
using namespace std;

int main(){
    Clase1<double> class_double;
    Clase1<string> class_str;
    Clase1<vector<int>> class_int;

    class_double.agregar_valor(1.3);
    class_double.agregar_valor(2.1);
    class_double.agregar_valor(3.2);
    class_str.agregar_valor("Hola");
    class_str.agregar_valor("Mundo");

    class_int.agregar_valor({1,2});
    class_int.agregar_valor({3,4});

    asociacion asoc_double = Clase2::procesar_clase(class_double);
    asociacion asoc_str = Clase2::procesar_clase(class_str);
    asociacion asoc_int = Clase2::procesar_clase(class_int);
    vector<asociacion> asoc_vector;
    asoc_vector.push_back(asoc_double);
    asoc_vector.push_back(asoc_str);
    asoc_vector.push_back(asoc_int);
    Clase2::creacion_JSON(asoc_vector);
    return 0;
}
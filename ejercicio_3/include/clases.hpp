#pragma once
#include <fstream>
#include <vector>
#include <string>
#include <type_traits>
#include <concepts>
using namespace std;
// habilito solo la clase si corresponde a los tipos de valores

template <typename T>
class Clase1
{
private:
    vector<T> valores;

public:
    void agregar_valor(T valor); // esta es común a todos los tipos
    string procesar_valores();   // depende del tipo que se instanció el vector
};

using asociacion = pair<string, string>;
class Clase2
{
public:
    //sobrecraga de funciones dependiendo del argumento tipo clase sin template
    static asociacion procesar_clase(Clase1<double> c1);
    static asociacion procesar_clase(Clase1<string> c1);
    static asociacion procesar_clase(Clase1<vector<int>> c1);
    //funcion que génera el JSON final
    static void creacion_JSON(const vector<asociacion>& asociaciones);

};

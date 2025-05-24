#include "../include/clases.hpp"
#include <type_traits>
#include <vector>
#include <iostream>

//_________________________________Clase 1________________________________________
template <typename T>
void Clase1<T>::agregar_valor(T valor)
{
    valores.push_back(valor);
}

template <typename T>
string Clase1<T>::procesar_valores()
{
    int tam_vec = static_cast<int>(valores.size());
    string salida = "[";
    //caso del vector de tipo int
    if constexpr (is_same_v<T, vector<int>>){
        salida += "\n"; // le agrego el salto de linea
        for (int i = 0; i < tam_vec; i++)
        {
            salida += "[";
            for (int j = 0; j < valores[0].size(); j++)
            {
                salida += to_string(valores[i][j]);
                // si estoy en  la ulti columna, entoces cierro y salto de lineas
                salida += (j == valores[0].size() - 1) ? "]" : ", ";
            }
            // si es la ultima fila solo ahce el salto de linea, sino agrega una coma
            salida += (i == tam_vec - 1) ? "\n" : ",\n";
        }
    }
    //caso del tipo string
    else if constexpr (is_same_v<T, string>)
    {
        for (int i = 0; i < tam_vec; i++)
        {
            salida += "\"" + valores[i] + "\""; // agrg "palabra"
            salida += (i == tam_vec - 1 )? "" : ", ";
        }
    }
    //caso del vector doble
    else if constexpr (is_same_v<T, double>)
    {
        for (int i = 0; i < tam_vec; i++)
        {
            salida += to_string(valores[i]);
            salida += (i == tam_vec - 1 )? "" : ", ";

        }
    }
    salida += "]";
    return salida;
}

template class Clase1<double>;
template class Clase1<string>;
template class Clase1<vector<int>>;


//____________________Clase 2________________________________________


asociacion Clase2::procesar_clase(Clase1<double> c1) {
    return {"vec_doubles", c1.procesar_valores()};
}

asociacion Clase2::procesar_clase(Clase1<string> c1) {
    return {"palabras", c1.procesar_valores()};
}

asociacion Clase2::procesar_clase(Clase1<vector<int>> c1) {
    return {"listas", c1.procesar_valores()};
}

void Clase2::creacion_JSON(const vector<asociacion>& asociaciones) {
    cout << "{\n";
    for (size_t i = 0; i < asociaciones.size(); ++i) {
        cout << "  \"" << asociaciones[i].first << "\": " << asociaciones[i].second;
        cout << (i == asociaciones.size() - 1 ? "\n" : ",\n");
    }
    cout << "}\n";
}


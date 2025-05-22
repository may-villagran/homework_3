#include "Figuras.hpp"

// Definición general de la template dentro del header
template <typename T>
class ProcesadorFigura {
public:
    /*
    El caso generaldebe estar en el header, ya que no se puede definir en el cpp
    Sino tengo un error de undefinend reference
    */
    static float calcular_area(T figura) {
        (void)figura; // Evita warning de parámetro no usado
        return 0;
    }
};

// Especialización para Rectangulo
template <>
float ProcesadorFigura<Rectangulo>::calcular_area(Rectangulo figura);

// Especialización para Circulo
template <>
float ProcesadorFigura<Circulo>::calcular_area(Circulo figura);

// Especialización para Elipse
template <>
float ProcesadorFigura<Elipse>::calcular_area(Elipse figura);

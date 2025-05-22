#include "Figuras.hpp"

template <typename T>
class ProcesadorFigura {
public:
    float calcular_area(T figura);
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
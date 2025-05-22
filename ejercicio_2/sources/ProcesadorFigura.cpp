#include "../include/ProcesadorFigura.hpp"

//especialización para el rectangulo
template<>
float ProcesadorFigura<Rectangulo>::calcular_area(Rectangulo figura){
    return figura.get_ancho() * figura.get_alto();
}

//especialización para el circulo   
template<>
float ProcesadorFigura<Circulo>::calcular_area(Circulo figura){
    return 3.14f * figura.get_radio() * figura.get_radio();
}

//especialización para la elipse
template<>
float ProcesadorFigura<Elipse>::calcular_area(Elipse figura){
    return 3.14f * figura.get_semieje_superior() * figura.get_semieje_inferior();
}
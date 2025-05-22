#include "./include/ProcesadorFigura.hpp"
#include "./include/Figuras.hpp"
#include <iostream>
using namespace std;

int main(){
    Punto punto(0, 0);
    Rectangulo rectangulo(punto, 2, 3);
    Circulo circulo(punto, 2);
    Elipse elipse(punto, 2, 3);
    cout << "Area del punto: " <<ProcesadorFigura<Punto>::calcular_area(punto) << endl;
    cout << "Area del rectangulo: " << ProcesadorFigura<Rectangulo>::calcular_area(rectangulo) << endl;
    cout << "Area del circulo: " << ProcesadorFigura<Circulo>::calcular_area(circulo) << endl;
    cout << "Area de la elipse: " <<ProcesadorFigura<Elipse>::calcular_area(elipse) << endl;
}
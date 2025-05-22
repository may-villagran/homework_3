#include "./sources/ProcesadorFigura.cpp"
#include "./sources/Figuras.cpp"
#include <iostream>
using namespace std;

int main(){
    Punto punto(0, 0);
    Rectangulo rectangulo(punto, 2, 3);
    Circulo circulo(punto, 2);
    Elipse elipse(punto, 2, 3);
    ProcesadorFigura<Punto> procesador_punto; //cae en el caso general, ya que no es compatible con las otras especificaiones
    ProcesadorFigura<Rectangulo> procesador_rectangulo;
    ProcesadorFigura<Circulo> procesador_circulo;
    ProcesadorFigura<Elipse> procesador_elipse;
    cout << "Area del punto: " << procesador_punto.calcular_area(punto) << endl;
    cout << "Area del rectangulo: " << procesador_rectangulo.calcular_area(rectangulo) << endl;
    cout << "Area del circulo: " << procesador_circulo.calcular_area(circulo) << endl;
    cout << "Area de la elipse: " << procesador_elipse.calcular_area(elipse) << endl;



}
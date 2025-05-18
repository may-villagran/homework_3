#include "./include/GuardadoInfo.hpp"
#include "./include/Mediciones.hpp"


int main(){
    Posicion posicion(-34.6f, -58.4f, 950.0f, 5.3); 
    Presion presion(101.3f, 5.8f, 6.1f);
    //uso de métodos imprimir
    posicion.imprimir();
    presion.imprimir();

    //prueba de objeto guardado de info
    cout<<"\nGuardado de info: " << endl;
    GuardadoInfo guardado (posicion, presion);
    guardado.imprimir();
    
}
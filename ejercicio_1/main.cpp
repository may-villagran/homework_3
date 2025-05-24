#include "./include/GuardadoInfo.hpp"
#include "./include/Mediciones.hpp"
#include <fstream>
#include <iostream>


int main(){
    Posicion posicion(-34.6f, -58.4f, 950.0f, 5.3); 
    Presion presion(101.3f, 5.8f, 6.1f);
    //uso de métodos imprimir
    cout<<"Uso de los métodos imprimir de posicion y presion: " << endl;
    posicion.imprimir();
    presion.imprimir();

    cout<<"\nUso de los métodos serializar y deserializar de la clase GuardadoInfo: " << endl;
    //prueba de objeto guardado de info
    GuardadoInfo guardado (posicion, presion);
    guardado.imprimir();

    ofstream salida("guardado.txt", ios::binary);
    if(salida.is_open()){
        guardado.serializar(salida);
        salida.close();
    }

    
    GuardadoInfo guardado2; 
    ifstream entrada("guardado.txt", ios::binary);
    if(entrada.is_open()){
        guardado2.deserializar(entrada);
        entrada.close();
    }
    cout<<"\nGuardado de info deserializado: " << endl;
    guardado2.imprimir();

    
}
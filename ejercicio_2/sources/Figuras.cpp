#include "../include/Figuras.hpp"

//__________________CLASE PUNTO____________________
Punto::Punto(float x, float y) : x(x), y(y) {}

void Punto::set_coordenada_x(float x) {
    this->x = x;
}
void Punto::set_coordenada_y(float y) {
    this->y = y;
}
float Punto::get_coordenada_x() {
    return x;
}
float Punto::get_coordenada_y() {
    return y;
}
//__________________CLASE CIRCULO____________________
Circulo::Circulo(Punto centro, float r) : centro(centro), radio(r) {}

void Circulo::set_centro(Punto centro) {
    this->centro = centro;
}
void Circulo::set_radio(float r) {
    this->radio = r;
}

float Circulo::get_radio(){
    return radio;
}

Punto Circulo::get_centro(){
    return centro;
}
//___________________CLASE ELIPSE____________________
Elipse::Elipse(Punto centro, float a, float b) : centro(centro), semieje_superior(a), semieje_inferior(b) {}

void Elipse::set_centro(Punto centro) {
    this->centro = centro;
}
void Elipse::set_semieje_superior(float a) {
    this->semieje_superior = a;
}
void Elipse::set_semieje_inferior(float b) {
    this->semieje_inferior = b;

}
float Elipse::get_semieje_superior() {
    return semieje_superior;
}
float Elipse::get_semieje_inferior() {
    return semieje_inferior;
}
Punto Elipse::get_centro() {
    return centro;
}


//___________________CLASE RECTANGULO____________________
Rectangulo::Rectangulo(Punto vertice, float ancho, float alto) : vertice(vertice), ancho(ancho), alto(alto) {}

void Rectangulo::set_vertice_inferior(Punto vertice) {
    this->vertice = vertice;
}
void Rectangulo::set_ancho(float ancho) {
    this->ancho = ancho;
}
void Rectangulo::set_alto(float alto) {
    this->alto = alto;
}


Punto Rectangulo::get_vertice_inferior() {
    return vertice;
}
float Rectangulo::get_ancho() {
    return ancho;
}
float Rectangulo::get_alto() {
    return alto;
}
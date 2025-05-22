#pragma once
class Punto
{
private:
    float x;
    float y;

public:
    Punto(float x = 0, float y = 0);
    void set_coordenada_x(float x);
    void set_coordenada_y(float y);

    float get_coordenada_x();
    float get_coordenada_y();
};

class Circulo
{
private:
    Punto centro;
    float radio;

public:
    Circulo(Punto centro,  float r = 0);
    void set_centro(Punto centro);
    void set_radio(float r);

    Punto get_centro();
    float get_radio();
};

class Elipse
{

private:
    Punto centro;
    float semieje_superior;
    float semieje_inferior;

public:
    Elipse(Punto centro, float a = 1, float b = 1);
    void set_centro(Punto centro);
    void set_semieje_superior(float a);
    void set_semieje_inferior(float b);

    Punto get_centro();
    float get_semieje_superior();
    float get_semieje_inferior();
};

class Rectangulo
{
private:
    Punto vertice;
    float ancho;
    float alto;

public:
    Rectangulo(Punto vertice, float ancho, float alto);
    void set_vertice_inferior(Punto vertice);
    void set_ancho(float ancho);
    void set_alto(float alto);

    Punto get_vertice_inferior();
    float get_ancho();
    float get_alto();
};

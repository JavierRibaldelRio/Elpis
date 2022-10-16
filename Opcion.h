
#ifndef OPCION_H
#define OPCION_H
using namespace std;

class Opcion
{

public:
    Opcion(); // constructor

    void establecerTiempo(int, int, int); // Asigna el tiempo

    void imprimirUniversal() const; // imprime la hora en formato universal

    // void imprimirEstandard() const; //imprime la hora en formato standar

private:
    /* data */

    unsigned int hora, minuto, segundo;
};

#endif
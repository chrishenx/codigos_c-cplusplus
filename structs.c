#include <stdio.h>
#include <stdlib.h>

/**
 * @autor Christian Gonzalez
 * @brief Logica para trabajar con numeros complejos en C
 */

typedef struct Complejo {
    float re;
    float im;
}Complejo;

void imprirComplejo(Complejo complejo);
Complejo sumarComplejos(Complejo c1, Complejo c2);
Complejo multiplicarComplejos(Complejo c1, Complejo c2);


/*----------------------------------------------*/

int main() {
    Complejo c1 = {11.1, 10.0101};   /*1 + 10i*/
    Complejo c2 = {-22.11,-0.1111};  /*2 - 17i*/
    
    printf("Complejo c1:  ");
    imprirComplejo(c1);
    printf("Complejo c2:  ");
    imprirComplejo(c2);

    Complejo suma = sumarComplejos(c1, c2);
    Complejo multiplicacion = multiplicarComplejos(c1, c2);
    printf("\nSuma de los dos complejos =  ");
    imprirComplejo(suma);
    printf("Multiplicacion de los dos complejos =  ");
    imprirComplejo(multiplicacion);

    return 0;
}

/*----------------------------------------------*/

void imprirComplejo(Complejo complejo) {
    printf("%.4f%+.4fi\n", complejo.re, complejo.im);
}

Complejo sumarComplejos(Complejo c1, Complejo c2) {
    Complejo suma = {c1.re + c2.re, c1.im + c2.im};
    return suma;
}

/*     (a + bi) · (c + di) = (ac − bd) + (ad + bc)i       */

Complejo multiplicarComplejos(Complejo c1, Complejo c2) {
    Complejo multiplicacion = {c1.re*c2.re - c1.im*c2.im, c1.re*c2.im + c1.im*c2.re};
    return multiplicacion;
}

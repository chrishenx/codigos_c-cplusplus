#include <stdio.h>  //Entrada y salida
#include <stdlib.h>  //Proposito general

/**
* @author Christian Gonzalez (chrishenx)
* @brief Ejemplo de manejo de memoria dinamica
* * Este material es puramente educativo *
*/

struct X {   /// Definicion de la estructura usada mas adelante
    int dato;
};

typedef struct X X;

int main() {
    X * apX = (X*)malloc(sizeof(X)); /// Aqui se realiza la asignacion dinamica de memoria

    if (apX == NULL) {
        printf("No se asigno la memoria");
    }

    apX->dato = 31;  /// Se usa el operador "->" porque la variable es tipo "apuntador"

    printf("%d\n", apX->dato);

    free(apX);   /// Aqui se libera la memoria asignada anteriormente

    printf("%d\n", apX->dato);   /// Se imprime basura porque el puntero no apunta
                                 /// a ningun lugar
    return 0;
}



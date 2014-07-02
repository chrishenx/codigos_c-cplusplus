#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define LONGITUD_CADENA 30  /// 30 bytes -- 240 bits (Por palabra), "cambiar para cadenas mas largas"

/*
 * Ejercicio con cadenas
 * a. Convertir cadenas a minusculas
 * b. Convertir cadenas a mayusculas
 * c. Contar vocales de cadena
 * d. Mostrar caracteres comunes entre dos cadenas
 * @author CPlayMasH
 * Fecha de creacion :  01 / 07 / 2014
 ** Contenido puramente educativo **
 */

void imprimirCadenas(char cadena1[], char cadena2[]);
void ingresarCadenas(char cadena1[], char cadena2[]);
void cadenasAMayusculas(char cadena1[], char cadena2[]);
void cadenasAMinusculas(char cadena1[], char cadena2[]);
void coincidenciasEntreCadenas(char cadena1[], char cadena2[]);
void contarVocalesEnCadena(char cadena[]);

int main() {
    char cadena1[LONGITUD_CADENA];
    char cadena2[LONGITUD_CADENA];
    char opcion;

    ingresarCadenas(cadena1, cadena2);
    printf("\n\t");
    system("pause&cls");

    do {
        imprimirCadenas(cadena1, cadena2);
        fflush(stdin);  /// Limpia el buffer del teclado
        printf("\n >>  Opciones :\n");
        printf("\n\ta)  Convertir ambas a mayusculas");
        printf("\n\tb)  Convertir ambas a minusculas");
        printf("\n\tc)  Contar cantidad de vocales en las palabras");
        printf("\n\td)  Indicar letras en comun entre las palabras");
        printf("\n\te)  Ingresar otras palabras");
        printf("\n\tf)  Salir del programa");
        printf("\n\n >>  Elija un opcion :  ");
        scanf("%c", &opcion);

        system("cls");

        switch (opcion) {
        case 'a':
            cadenasAMayusculas(cadena1, cadena2);
            imprimirCadenas(cadena1, cadena2);
            break;
        case 'b':
            cadenasAMinusculas(cadena1, cadena2);
            imprimirCadenas(cadena1, cadena2);
            break;
        case 'c':
            contarVocalesEnCadena(cadena1);
            contarVocalesEnCadena(cadena2);
            break;
        case 'd':
            imprimirCadenas(cadena1, cadena2);
            coincidenciasEntreCadenas(cadena1, cadena2);
            break;
        case 'e':
            fflush(stdin);
            ingresarCadenas(cadena1, cadena2);
            break;
        case 'f':
            printf("\n >>>  No hay marcha atras !\n");
            break;
        default:  /// Simplemente se repite el bucle
            break;
        }

        printf("\n\t");
        system("pause&cls");

    } while (opcion != 'f');

    return  0;
}

void ingresarCadenas(char cadena1[], char cadena2[]) {
    printf(" >>  Ingresar palabra 1 :  ");
    gets(cadena1);
    printf("\n >>  Ingresar palabra 2 :  ");
    gets(cadena2);
}

void imprimirCadenas(char cadena1[], char cadena2[]) {
    printf(" >>  Palabra 1:  %s\n", cadena1);
    printf(" >>  Palabra 2:  %s\n", cadena2);
}

void cadenasAMayusculas(char cadena1[], char cadena2[]) {
    int i;
    for (i = 0; cadena1[i] != '\0'; i++)
        cadena1[i] = toupper(cadena1[i]);    /// Convierte a mayuscula el caracter
    for (i = 0; cadena2[i] != '\0'; i++)
        cadena2[i] = toupper(cadena2[i]);    /// Convierte a mayuscula el caracter
}

void cadenasAMinusculas(char cadena1[], char cadena2[]) {
    int i;
    for (i = 0; cadena1[i] != '\0'; i++)
        cadena1[i] = tolower(cadena1[i]);    /// Convierte a minuscula el caracter
    for (i = 0; cadena2[i] != '\0'; i++)
        cadena2[i] = tolower(cadena2[i]);    /// Convierte a minuscula el caracter
}

void contarVocalesEnCadena(char cadena[]) {
    int a = 0, e = 0, i = 0, o = 0, u = 0;
    int j;
    for (j = 0; cadena[j] != '\0'; j++) {
             if (cadena[j] == 'a' || cadena[j] == 'A') a++;
        else if (cadena[j] == 'e' || cadena[j] == 'E') e++;
        else if (cadena[j] == 'i' || cadena[j] == 'I') i++;
        else if (cadena[j] == 'o' || cadena[j] == 'O') o++;
        else if (cadena[j] == 'u' || cadena[j] == 'U') u++;
    }
    printf("\n >> Palabra :  %s\n", cadena);
    printf("\n\t >>> Vocales ->  { a=%d, e=%d, i=%d, o=%d, u=%d }\n", a, e, i, o, u);
}

void coincidenciasEntreCadenas(char cadena1[], char cadena2[]) {
    char coincidencias[LONGITUD_CADENA];

    int i, j, comunes = 0;
    for (i = 0; cadena1[i] != '\0'; i++) {
        for (j = 0; cadena1[j] != '\0'; j++) {
            if (cadena1[i] == cadena2[j]) {
                int l, repetido = 0; /// Si "repetido" es 1 entonces cadena1[i] ya esta dentro e las coincidencias
                for (l = 0; coincidencias[l] != '\0'; l++) {
                    if (cadena1[i] == coincidencias[l]) {   /// Busqueda de coincidencia en el arreglo "coincidencias"
                                                            /// para evitar repetidos
                        repetido = 1;
                        break;
                    }
                }
                if (repetido == 0) {  /// Si "repetido" es 0 entonces se agrega una nueva coincidencia
                    coincidencias[comunes] = cadena1[i];
                    comunes++;
                }
                break;
            }
        }
    }

    printf("\n >>>  Caracteres en comun entre las palabras :  { ");
    for (i = 0; i < comunes; i++) {
        printf("%c%s", coincidencias[i], ((i < comunes - 1) ? ", " : " "));
    }
    printf("}\n\n >>>  Cantidad de coincidencias :  %d\n", comunes);
}

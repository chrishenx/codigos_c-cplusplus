#include <stdio.h>

/*Formas de declarar cadenas en C*/

int main(){

    char * apCadena = "Soy una cadena declarada con un apuntador"; 
        //La direccion del primer caracter es asignada al apuntador
        
    char arrCadena[] = "Soy una cadena asignada a un arreglo";

    apCadena += 2; //Ahora apCadena apunta a la direccion del caracter 'C'
    printf("Cadena :  %s", apCadena); //Primer forma de imprimir cadenas
    
    puts(arrCadena); //Otra forma de imprimir cadenas

    printf("\n\n");
    return 0;
}

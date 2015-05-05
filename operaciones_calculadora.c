/**
  
  ** Materia educativo **

  Este código muestra una calculadora básica escrita en lenguaje C.
  
  @author Christian GOnzalez
  @date 04/05/2015
 */


#include <stdio.h>
#include <stdlib.h>

int main() {

  float a, b;

  printf("Programa que realiza las 4 operaciones basicas entre dos numeros\n\n");
  printf("Introduce el primer numero (a): ");
  scanf("%f", &a);
  printf("Introduce el segundo numero (b): ");
  scanf("%f", &b);

  printf("\n");
  printf("a + b = %f\n", a + b);
  printf("a - b = %f\n", a - b);
  printf("b - a = %f\n", b - a);
  printf("a * b = %f\n", a * b);
  printf("a / b = ");
  if (b != 0) {
    printf("%f", a / b);
  } else {
    printf("indefinido");
  }
  printf("\nb / a = ");
  if (a != 0) {
    printf("%f", b / a);
  } else {
    printf("indefinido");
  }
  printf("\n");

  printf("\nEl programa ha terminado!\n\n");
  system("pause");

  return 0;
}
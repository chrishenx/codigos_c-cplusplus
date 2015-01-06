#include <iostream>
#include <cmath> // Biblioteca que contiene funciones matematicas

using namespace std;

int main() {
    double a = 2.1, b = -19.01, c = -10;
    cout << "Programa que calcula las raices de un polinomio de 2do grado:" << endl;
    cout << "\nPolinomio en cuestion: 2.1x^2 - 19.01x - 10" << endl;

	// Es importante escribir correctamente la expresion para obtener
	// resultados correctos
    double x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a); 
    double x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

    cout << "Las raices del polinomio son:" << endl;
    cout << "X1 =  " << x1 << endl;
    cout << "X2 =  " << x2 << endl;

	// Si la expresion es larga, escribirla entre parentesis
	// puede ser una buena idea
    cout << "Sustituyendo X1 en el polinomio: " << (a * x1 * x1 + b * x1 + c) << endl;
    cout << "Sustituyendo X2 en el polinomio: " << (a * x2 * x2 + b * x2 + c) << endl;

    return 0;
}

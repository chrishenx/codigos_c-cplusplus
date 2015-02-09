#include <iostream>
#include <cstdlib>

/**
 * Estructuas condicionales
 * Material puramente educativo.
 * @author Christian Gonzales (chrishenx, CPlayMasH)
 */

using namespace std;

int main()
{
    int n;
//    cout << "Programa que dice si un nuemero es negativo, positivo o igual cero" << endl;
    cout << "Programa que dice si un multiplo de 5" << endl;
    cout << "Introduce el numero: ";
    cin >> n;

//    if (n < 0) {
//        cout << "El numero es negativo" << endl;
//    } else if (n > 0) {
//        cout << "El numero es positivo" << endl;
//    } else  {
//        cout << "El numero es igual a cero" << endl;
//    }

    if (n % 5 == 0) {
        cout << "El numero es NO multiplo de 5" << endl;
    } else {
        cout << "El numero es SI multiplo de 5" << endl;
    }

    return 0;
}



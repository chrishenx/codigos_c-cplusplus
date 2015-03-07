#include <iostream>

using namespace std;

// 4, 5, 0.5 -> 4 - 4.5 - 5

int main()
{
    cout << "Programa que genera una secuencia entre dos numeros" << endl;
    double limite_inferior, limite_superior;
    cout << "Limite inferior: ";
    cin >> limite_inferior;
    cout << "Limite superior: ";
    cin >> limite_superior;
    double paso;
    cout << "Tamanyo de paso: ";
    cin >> paso;

    cout << endl;
    while (limite_inferior <= limite_superior) {
        cout << limite_inferior << endl;
        limite_inferior += paso;
    }
    cout << endl;

    return 0;
}

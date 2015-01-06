#include <iostream>

using namespace std;

int main() {
    int a = 5;
    float b = 5;

    bool booleana = (1 < 10) and (true || not(!(a > b)));

    cout << booleana << endl;


    return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

long long factorial(long long n);
double exp_maclaurin(int terminos, double x);

int main() {

  const double PI = 3.141592;
  const int TERMINOS = 14;

  cout << "Exponencial de pi segun cmath: " << exp(PI) << endl;

  for (int i = 1; i <= TERMINOS; i++) {
    cout << "Exponencial de pi con " << i
         << " terminos: " << exp_maclaurin(i, PI) << endl;
  }

  cout << endl;
  return 0;
}

long long factorial(long long n) {
  long long fact = 1;
  for (long long i = 1; i <= n; i++) {
    fact *= i;
  }
  return fact;
}

double exp_maclaurin(int terminos, double x) {
  double sumatoria = 0;
  for (int n = 0; n <= terminos; n++) {
    sumatoria += pow(x, n) / factorial(n);
  }
  return sumatoria;
}

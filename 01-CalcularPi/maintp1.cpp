#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double calculaPi (){
double pi = 0.0;
double resultado = 1.0;
int signo = 1;
float denominador = 1.0;
double decimales = 1e-7;

  while (abs(resultado) >= decimales){
    
    resultado = (1.0 / denominador) * signo;
   
    signo *= -1;
   
    denominador += 2;
   
    pi += resultado;

  }
  cout << "El valor de Pi es: " << pi << endl;
  
  return pi * 4;
}
 
 int main()
 {
    double resultado = calculaPi();
    cout.precision(8);
    cout << "El valor de Pi es: " << resultado << endl;
    return 0;
 }

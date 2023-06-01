#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    int  iteraciones=1000000;
    double resultado = 0.0;


    for (int i = 0; i < iteraciones; i++) {
        double termino = 1.0 / (2 * i + 1);

        if (i % 2 == 0) {
            resultado += termino;
        } else {
            resultado -= termino;
        }
    }

    double pi = 4 * resultado;
   

    cout  << setprecision(6) << fixed << pi << endl;

    return 0;
}


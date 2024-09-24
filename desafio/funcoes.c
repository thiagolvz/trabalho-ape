#include <math.h>
#include "funcoes.h"

//valores da função
#define A0 186.752
#define A1 -148.235
#define A2 34.5049
#define A3 -3.5091
#define A4 0.183166
#define A5 -0.00513554
#define A6 0.0000735464
#define A7 -4.22038e-7

//implementação da função
int funcao(int x, int b) {
    double y = A0 + (A1 + b) * x
           + A2 * pow(x, 2)
           + A3 * pow(x, 3)
           + A4 * pow(x, 4)
           + A5 * pow(x, 5)
           + A6 * pow(x, 6)
           + A7 * pow(x, 7);
           
    return round(y);
}

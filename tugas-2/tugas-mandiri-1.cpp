#include <stdio.h>
#include <math.h>

int main() {

    double diameter = 15.0; 
    double jariJari = diameter / 2.0;

    double pi = 3.141592653; 
    double volume = (4.0 / 3.0) * pi * pow(jariJari, 3);

    printf("Volume bola dengan diameter %.2lf cm adalah: %.2lf cm^3\n", diameter, volume);

    return 0;
}


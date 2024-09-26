#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double r,V;
    printf("veuillez entrer la valeur de le rayon de la sphere :");
    scanf("%lf",&r);
    V=(4.0/3.0)*M_PI*pow(r,3);
    printf("le volume de sphere est %.2lf",V);
    return 0;
}

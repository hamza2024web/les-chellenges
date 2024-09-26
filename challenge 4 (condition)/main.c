#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a,b,c,delta,delta1,delta2;
    printf("veuillez saiser le nombre a :");
    scanf("%f",&a);
    printf("veuillez saiser le nombre b :");
    scanf("%f",&b);
    printf("veuillez saiser le nombre c :");
    scanf("%f",&c);
    delta=pow(b,2)-(4*a*c);
    if (delta==0){
        delta1=-b/(2*a);
        printf("la solution de l'equation est %f",delta1);
    }
    if (delta>0){
        delta1=(-b-sqrt(delta))/(2*a);
        delta2=(-b+sqrt(delta))/(2*a);
        printf("les deux solutions de l'equation est %f et %f",delta1,delta2);
    }else {
        printf("l'equation n'admet pas de solution");
    }
    return 0;
}

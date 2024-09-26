#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a,b,c,Moyenne_geometrique;
    printf("saiser le valeur de premier nombre a :");
    scanf("%f",&a);
    printf("saiser la valeur de deuxieme nombre b :");
    scanf("%f",&b);
    printf("saiser la valeur de troissieme nombre c :");
    scanf("%f",&c);
    Moyenne_geometrique=pow(a*b*c,1/3);
    printf("la moyenne geometrique de trois nombres est %.2f",Moyenne_geometrique);
    return 0;
}

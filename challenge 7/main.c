#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nombre1,nombre2,nombre3,M;
    printf("saiser le premier nombre1 :");
    scanf("%f",&nombre1);
    printf("saiser le deuxieme nombre2 :");
    scanf("%f",&nombre2);
    printf("saiser la troisieme nombre3 :");
    scanf("%f",&nombre3);
    M=(nombre1*2)+(nombre2*3)+(nombre3*5)/2+3+5;
    printf("la moyenne ponderee de trois nombres est %.0f",M);
    return 0;
}

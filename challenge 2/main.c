#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c,k;
    printf("veuillez saiser la temperateure en celsius\n");
    scanf("%f",&c);
    k = c + 273.15;
    printf("la temperateure en kelvin est %.2f",k);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km,m;
    printf("donner moi la vitesse en kilometre par seconde\n");
    scanf("%f",&km);
    m = km * 0.2778;
    printf("la vitesse en metre est %f",m);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km,yr;
    printf("veuillez saiser la distance en kilometre\n");
    scanf("%f",&km);
    yr = km * 1093.61;
    printf("la distance en yards est %f",yr);
    return 0;
}

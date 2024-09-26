#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    double x1,y1,z1,x2,y2,z2,Distance;
    printf("veuilleez saiser les valeurs des points x1,y1,z1,x2,y2,z2 :");
    scanf("%lf %lf %lf %lf %lf %lf",&x1,&y1,&z1,&x2,&y2,&z2);
    Distance=sqrt(pow((x2-x1),2)+pow((y2-y1),2)+pow((z2-z1),2));
    printf("la distance entre deux points est %.2lf",Distance);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,S;
    printf("saiser la valeur de a :");
    scanf("%d",&a);
    printf("saiser la valeur de b :");
    scanf("%d",&b);
    if (a==b){
        S=(a+b)*3;
        printf("la somme de a+b est : %d",S);
    }else{
        S=a+b;
        printf("la somme de a+b est : %d",S);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombre;
    printf("veuillez saiser un nombre :");
    scanf("%d",&nombre);
    if (nombre%2==0){
        printf("le nombre %d est pair",nombre);
    } else {
        printf("le nombre %d et impaire",nombre);
    }
    return 0;
}

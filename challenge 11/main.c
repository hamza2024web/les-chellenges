#include <stdio.h>
#include <stdlib.h>

int main()
{
    int longueur,largeur,surface;
    printf("veuillez saiser la longueur du rectangle :");
    scanf("%d",&longueur);
    printf("veuillez saiser la largeur du rectangle :");
    scanf("%d",&largeur);
    surface=longueur*largeur;
    printf("la valeur de la surface du rectangle est %d",surface);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c;
    printf("veuillez saiser la temperateur en celsius\n");
    scanf("%f",&c);
        if (c<0){
            printf("l'eau est solide");
        }else if (c>=0 && c<100){
            printf("l'eau est liquide");
        }else if (c>=100){
            printf("l'eau est Gaz");
        }
    return 0;
}

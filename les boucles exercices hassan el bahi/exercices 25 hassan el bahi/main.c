#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i;
    printf("veuillez saiser un nombre de depart :");
    scanf("%d",&N);
    i=N+1;
    while (i<=10){
        printf("%d ",i);
        i++;
    }
    return 0;
}

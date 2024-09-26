#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N,i;
    printf("veuillez saiser un nombre de depart :");
    scanf("%d",&N);
    for (i=N+1;i<=N+10;i++){
        printf("%d ",i);
    }
    return 0;
}

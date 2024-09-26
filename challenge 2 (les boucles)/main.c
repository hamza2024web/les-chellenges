#include <stdio.h>

int main() {
    int n,i;
    int f=1;
    printf("veuillez saiser la valeur de n :");
    scanf("%d",&n);
    if (n<0){
        printf("veuillez saiser un nombre superieur a zero");
        return 1;
    }
    for (i=n;i>0;i--){
        f=f*i;
        }
        printf("la factorielle de %d!=%d\n",n,f);
    return 0;
}

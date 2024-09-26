#include <stdio.h>
#include <stdlib.h>

int main()
{
    char caractere;
    printf("saiser un caractere :");
    scanf("%c",&caractere);
    switch (caractere){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'O':
        case 'U':
        case 'I':
            printf("%c est une voyelle",caractere);
        break;
        default:
            printf("%c n'est pas une voyelle.\n");
    }
    return 0;
}

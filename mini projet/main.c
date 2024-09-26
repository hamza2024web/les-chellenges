#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int choice;
    int som,sous,div,mult,val_absolu,moy,expo,rac_carr;
    int a,b,c,x;
    printf("la listes des choix :\n");
    printf(" 1.Addition : \n.");
    printf(" 2.Soustraction : \n.");
    printf(" 3.Division : \n");
    printf(" 4.Multiplication : \n");
    printf(" 5.valeur absolue\n");
    printf(" 6.moyenne\n");
    printf(" 7.exponentiation\n");
    printf(" 8.racine carre\n");
    printf("entrer ton choix:\n");
    scanf("%d",&choice);
    switch (choice){
        case 1 :
            printf("Combien de nombres avez-vous ? ");
            scanf("%d", &x);
            som = 0;
            for (int i = 0; i < x; i++) {
                    printf("%d eme nombre : ", i + 1);
                    scanf("%d", &a);
                    som += a;
                }
                printf("La somme est %d\n", som);
        break;
        case 2 :
            printf("ton choice est l'option 2\n");
            printf("veuillez saiser la valeur de a :");
            scanf("%d",&a);
            printf("veuillez saiser la valeur de b :");
            scanf("%d",&b);
            sous = a-b;
            printf("le resultat de la soustraction est : %d\n",sous);
        break;
        case 3 :
            printf("ton choice est l'option 3\n");
            printf("veuillez saiser la valeur de a :");
            scanf("%d",&a);
            if ("b=0"){
                printf("la division est impossible , veuillez saiser un autre nombre .");
            }

            if (b>0 || b<0){
                printf("veuillez saiser la valeur de b :");
                scanf("%d",&b);
                }
            div = a/b;
            printf("le resultat de la division est : %d\n",div);
        break;
        case 4 :
            printf("ton choice est l'option 4\n");
            printf("Combien de nombres avez-vous ?");
            scanf("%d",&x);
            for (int i=0;i<x;i++){
                printf("%d nombre :");
                scanf("%d",&a);
                mult*=a;
            }
            mult = a*b;
            printf("le resultat de la multiplication est : %d\n",mult);
        break;
        case 5 :
            printf("ton choice est l'option 5\n");
            printf("veuillez saiser la valeur de c :\n");
            scanf("%d",&val_absolu);
            c = abs(val_absolu);
            printf("le resultat de valeur absolue de %d est %d\n",val_absolu,c);
        break;
        case 6 :
            printf("ton choice est l'option 6\n");
            printf("veuillez saiser la valeur de a :");
            scanf("%d",&a);
            printf("veuillez saiser la valeur de b :");
            scanf("%d",&b);
            moy = (a+b)/2;
            printf("le resultat de la moyenne est : %d\n",moy);
        break;
        case 7 :
            printf("ton choice est l'option 7\n");
            printf("veuillez saiser la valeur de a :");
            scanf("%d",&a);
            printf("veuillez saiser la valeur de b :");
            scanf("%d",&b);
            expo = pow(a,b);
            printf("le resultat de l'exponentiation est %d\n",expo);
        break;
        case 8 :
            printf("ton choice est l'option 8\n");
            printf("veuillez saiser la valeur de a :");
            scanf("%d",&a);
            if (a>0){
                rac_carr =  sqrt(a);
                printf("le resultat de la racine carre est %d\n",rac_carr);
            }else{
                printf("le nombre saiser est invalide");
            }
        break;
        default:
            printf("ton choice est incorecte .");
        break;
    }
    return 0;
}

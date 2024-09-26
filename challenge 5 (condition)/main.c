#include <stdio.h>
#include <stdlib.h>

int main()
{
    int annee,mois,jours,heures,minutes,secondes;
    printf("veuillez saiser l'annee actuele :");
    scanf("%d",&annee);
    mois=12;
    jours=365;
    heures=jours/24;
    minutes=heures/60;
    secondes=minutes/60;
    printf("conversion de l'annee est %d mois,%d jours,%d heures,%d minutes,%d secondes",mois,jours,heures,minutes,secondes);
    return 0;
}

#include <stdio.h>

int main() {
    int nombre, inverse;
    printf("Entrez un nombre a quatre chiffres : ");
    scanf("%d", &nombre);
    if (nombre < 1000 || nombre > 9999) {
        printf("Veuillez entrer un nombre a quatre chiffres.\n");
        return 1;
    }
    inverse=(nombre % 10) * 1000 +(nombre / 10 % 10) * 100 +(nombre / 100 % 10) * 10 +(nombre / 1000);
    printf("Le nombre inverse est : %d\n", inverse);
    return 0;
}

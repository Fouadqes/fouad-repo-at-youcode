#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A, B;
    printf("veuillez entrer la valeur de A : ");
    scanf("%f", &A);
    printf("veuillez entrer la valeur de B : ");
    scanf("%f", &B);

    printf("Resultat est : %.2f", A+B);
    printf("\n Resultat est : %.2f", A-B);
    printf("\n Resultat est : %.2f", A*B);
    printf("\n Resultat est : %.2f", A/B);


    return 0;
}

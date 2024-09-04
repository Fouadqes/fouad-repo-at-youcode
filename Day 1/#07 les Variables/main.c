#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A, B, C, Moyenne, S;
    printf("veuillez entrer la valeur de A : ");
    scanf("%f", &A);
    printf("veuillez entrer la valeur de B : ");
    scanf("%f", &B);
    printf("veuillez entrer la valeur de C : ");
    scanf("%f", &C);

    S=(A*2)+(B*3)+(C*5);
    Moyenne = S/10;

    printf("la Moyenne est : %.2f", Moyenne);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float Kh, Ms;
    printf("veuillez entrer le kilom�tres par heure : ");
    scanf("%f", &Kh);
    Ms = Kh * 0.277781;
    printf(" la transforme en m�tres par seconde est : %.2f", Ms);
    return 0;
}

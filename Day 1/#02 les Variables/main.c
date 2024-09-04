#include <stdio.h>
#include <stdlib.h>

int main()
{
    float K, C;
    printf("veuillez entrer Kelvin : ");
    scanf("%f", &K);
    printf("veuillez entrer Celsius : ");
    scanf("%f", &C);
    K = C + 273.15;
    printf("la température est : %.2f", K);

    return 0;
}

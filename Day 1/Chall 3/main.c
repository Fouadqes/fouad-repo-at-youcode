#include <stdio.h>
#include <stdlib.h>

int main()
{
    float K, Y;
    printf("veuillez entrer le kilomètres : ");
    scanf("%f", &K);
    Y = K * 1093.61;
    printf("la distance en kilomètres et la transforme en yards : %.2f", Y);
    return 0;
}

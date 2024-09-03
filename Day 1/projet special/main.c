#include <stdio.h>
#include <stdlib.h>

int main()
{
    float NA, NP;
    printf("veuillez entrer Nomnre de projet : ");
    scanf("%f", &NA);
    printf("veuillez entrer anne d experience : ");
    scanf("%f", &NP);

    if(NA>10&&NP>15)
       printf("le bonus est 30%");
    else if (NA>10&& NP>10&&NP<15)
        printf("le Bonus est 20%");
    else
        printf("le bonus est 0%");


    return 0;
}

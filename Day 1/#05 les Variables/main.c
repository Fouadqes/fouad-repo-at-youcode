#include <stdio.h>
#include <stdlib.h>

int main()
{
    int C;
    printf("veuillez entrer la température en Celsius : ");
    scanf("%d", &C);
    if(C < 0)
        printf("la température est Solide");
    else if(C >= 100)
        printf("la température est Gaz");
    else if(0 <= C < 100 )
        printf("la température est Liquide");
    return 0;
}

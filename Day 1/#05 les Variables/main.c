#include <stdio.h>
#include <stdlib.h>

int main()
{
    int C;
    printf("veuillez entrer la temp�rature en Celsius : ");
    scanf("%d", &C);
    if(C < 0)
        printf("la temp�rature est Solide");
    else if(C >= 100)
        printf("la temp�rature est Gaz");
    else if(0 <= C < 100 )
        printf("la temp�rature est Liquide");
    return 0;
}

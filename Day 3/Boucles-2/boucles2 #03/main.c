#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    printf("Entrer le nombre : ");
    scanf("%d",&N);
    printf("Les nombres premiers de 1 à %d est : ",N);
    for(int i = 1;i <= N ; i++){
        int estP = i%2;
        if(estP == 1)
            printf("%d ",i);
    }
    return 0;
}

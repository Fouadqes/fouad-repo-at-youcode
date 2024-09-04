#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, min;
    printf("entrer la valeur de N : ");
    scanf("%d", &N);
    int T[N];
    for (int i=0;i<N;i++){
        printf("entrer les elements %d: ", i+1);
        scanf("%d", &T[i]);
    }
    min = T[0];
    for(int i=N;i>0;i--)
        if(min>T[i])
        min= T[i];
    printf("le minimum est : %d", min);

    return 0;

}

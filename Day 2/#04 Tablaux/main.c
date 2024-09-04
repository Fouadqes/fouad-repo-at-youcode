#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, Max;
    printf("veuillez entrer nombre des elements : ");
    scanf("%d", &N);
    int T[N];
    for(int i=0;i<N;i++){
        printf("entrer element %d: ", i+1);
        scanf("%d", &T[i]);
    }
    Max = T[0];
    for(int i=0;i<N;i++)
        if(Max<T[i])
        Max = T[i];
    printf("le maximum est : %d", Max);

    return 0;
}

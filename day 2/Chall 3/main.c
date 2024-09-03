#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    printf("veuillez entrer nombre des element : ");
    scanf("%d", &N);

    int tableau[N];
    for(int i=0; i<N; i++){
        printf("entrer les elements %d: ",i+1);
        scanf("%d", &tableau[i]);
    }
    printf("la somme d'elements est: ");
    return 0;
}

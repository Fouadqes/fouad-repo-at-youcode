#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, somme;
    printf("veuillez entrer nombre des element : ");
    scanf("%d", &N);

    int tableau[N];
    for(int i=0; i<N; i++){
        printf("entrer les elements %d: ",i+1);
        scanf("%d", &tableau[i]);
    }
    somme = 0;
    printf("la somme d'elements est: ");
    for(int i=0;i<N;i++)
        somme = somme + tableau[i];

    printf("%d", somme);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    printf("entrer la valeur de N : ");
    scanf("%d", &N);
    int T[N];
    for (int i=0;i<N;i++){
        printf("entrer les elements %d: ", i+1);
        scanf("%d", &T[i]);
    }
    int facteur;
    printf("entrer le facteur : ");
    scanf("%d", &facteur);
    for (int i=0;i<N;i++)
        T[i] *= facteur;
    printf("resultat du tableau est : ");
    for(int i=0;i<N;i++)
        printf("%d", T[i]);


    return 0;
}

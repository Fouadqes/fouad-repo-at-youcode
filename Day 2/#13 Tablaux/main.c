#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    printf("entrer nombre des elements");
    scanf("%d", &N);
    int tableau[N];
    for(int i=0;i<N;i++){
        printf("entrer element %d: ", i+1);
        scanf("%d", &tableau[i]);
    }
    for(int i=0;i<N;i++){
        if(tableau[i]%2)

        printf("les nombre impair est: %d\n",tableau[i]);
    }



    return 0;
}

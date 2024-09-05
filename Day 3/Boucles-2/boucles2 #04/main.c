#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main() {
    int N;
    int Inverse=0;
    printf("entrer le nombre  : ");
    scanf("%d", &N);
    do{
       Inverse = (Inverse*10) + (N%10);
       N = N / 10;
    }while(N!=0);
    printf("l'inverse est %d", Inverse);

    return 0;
}

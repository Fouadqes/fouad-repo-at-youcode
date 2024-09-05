#include <stdio.h>
#include <stdlib.h>

int main() {
    int L;
    printf("entrer nombre lignes : ");
    scanf("%d", &L);
    for(int i = 0 ; i<= L ; i++){
       for(int j = i ; j < L ; j ++){
           printf(" ");
       }
       for(int j = 0 ; j < 2 * i - 1 ; j ++){
           printf("*");
       }
       printf("\n");
    }
    return 0;
}

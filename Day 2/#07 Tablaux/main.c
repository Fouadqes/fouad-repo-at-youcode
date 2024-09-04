#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int T[]={14,884,62,95,625};
    int nbr;
    for(i=0;i<5;i++){
        for(j=0;j<i;j++){
            if(T[i]>T[j]){
                nbr=T[i];
                T[i]=T[j];
                T[j]=nbr;
            }
        }
    }
    for(j=0;j<5;j++)
        printf("T[%d]=%d\n",j,T[j]);
    return 0;
}

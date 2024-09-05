#include <stdio.h>
#include <stdlib.h>

int Minimum(int a, int b)
{
    if(a<b){
        return a;
    }
    else if(b<a){
        return b;
    }

}

int main() {
    int a, b, min;
    printf("veuillez entrer deux entiers : " );
    scanf("%d%d",&a,&b);
    min = Minimum(a,b);
    printf("Le maximum nombre : %d",min);

    return 0;
}

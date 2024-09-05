#include <stdio.h>
#include <stdlib.h>

int Maximum(int a, int b)
{
    if(a>b){
        return a;
    }
    else if(b>a){
        return b;
    }

}

int main() {
    int a, b, max;
    printf("veuillez entrer deux entiers : " );
    scanf("%d%d",&a,&b);
    max = Maximum(a,b);
    printf("Le maximum nombre : %d",max);

    return 0;
}

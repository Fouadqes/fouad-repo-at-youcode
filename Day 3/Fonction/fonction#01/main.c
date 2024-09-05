#include <stdio.h>
#include <stdlib.h>

int Som(int a, int b)
{
    int s;
    s = a+b;
    return s;
}

int main() {

    int Som(int,int);
    int a, b, somme;
    printf("veuillez entrer deux entiers : " );
    scanf("%d%d",&a,&b);
    somme = Som(a,b);
    printf("%d + %d = %d", a,b,somme);

    return 0;
}

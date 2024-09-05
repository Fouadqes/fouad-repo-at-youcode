#include <stdio.h>
#include <stdlib.h>

int Multiplication(int a, int b)
{
    int m;
    m = a*b;
    return m;
}

int main() {
    int a, b, mult;
    printf("veuillez entrer deux entiers : " );
    scanf("%d%d",&a,&b);
    mult = Multiplication(a,b);
    printf("%d * %d = %d", a,b,mult);

    return 0;
}

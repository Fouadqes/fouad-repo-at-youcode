#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Longueur, Largeur, Surface;
    printf("veuillez entrer le longueur de rectongle : ");
    scanf("%d", &Longueur);
    printf("veuillez entrer le largeur de rectongle : ");
    scanf("%d", &Largeur);
    Surface = Longueur * Largeur;
    printf("Surface de Rectongle est : %d", Surface);

    return 0;
}

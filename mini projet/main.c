#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombre;
    char titre, auteur;
    int prix, quantite;
    do{
        printf("1: Ajouter un livre au stock:\n ");
        printf("2: Afficher tous les livres disponibles\n ");
        printf("3: Rechercher un livre par son titr\n ");
        printf("4: Mettre a jour la quantité d'un livre\n ");
        printf("5: Supprimer un livre du stock\n ");
        printf("6: Afficher le nombre total de livres en stock\n ");
        printf("\n ");
        printf("entrer nombre de votre choix: ");
        scanf("%d", &nombre);

    if(nombre == 1){
        printf("Titre du livre: ");
        scanf("%s", &nombre);
        printf("auteur du livre: ");
        scanf("%s", &nombre);
        printf("prix du livre: ");
        scanf("%d", &nombre);
        printf("quantite du livre: ");
        scanf("%d",&nombre);
    }
    else if(nombre == 2){

    }

}while(nombre != 7);


    return 0;
}

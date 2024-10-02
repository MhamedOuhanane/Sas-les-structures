#include<stdio.h>
#define n1 20 

typedef struct 
{
    char titre[n1];
    char auteur[n1];
    int annee;
}livre;

livre Initialisation();

int main()
{
    livre livre;
    livre = Initialisation(livre);
    printf("Les information de livre : \n");
    printf("Titre  : %s\n",livre.titre);
    printf("Auteur : %s\n",livre.auteur);
    printf("Annee  : %d\n",livre.annee);
    return 0;
}

livre Initialisation(livre a)
{
    printf("Donner le titre du livre : ");
    scanf(" %[^\n]s",a.titre);
    printf("Donner le auteur du livre : ");
    scanf(" %[^\n]s",a.auteur);
    printf("Donner l'annee du livre : ");
    scanf("%d",&a.annee);
    return a;
}
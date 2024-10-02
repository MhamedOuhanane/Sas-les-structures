#include<stdio.h>

typedef struct 
{
    char nom[20];
    char prenon[20];
    int age;
}personne;

int main()
{
    personne p;
    printf("Saisir le nom de personne p : ") ;
    scanf(" %[^\n]s",p.nom);
    printf("Saisir le prenom de personne p : ") ;
    scanf(" %[^\n]s",p.prenon);
    printf("Saisir l'age de personne p : ") ;
    scanf("%d",&p.age);
    printf("Les information de personne p est : \n");
    printf("Nom    : %s\n",p.nom);
    printf("Prenon : %s\n",p.prenon);
    printf("Age    : %d\n",p.age);
    return 0;
}

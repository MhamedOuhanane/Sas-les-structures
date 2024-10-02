#include<stdio.h>

typedef struct 
{
    char nom[20];
    char prenon[20];
    int note[10];
}etudiant;

int main()
{
    etudiant Etu;
    int i;
    printf("Saisir le nom d'etudiant Etu : ") ;
    scanf(" %[^\n]s",Etu.nom);
    printf("Saisir le prenom d'etudiant Etu  : ") ;
    scanf(" %[^\n]s",Etu.prenon);
    for ( i = 0; i < 10; i++)
    {
        printf("Dnner la note %d : ",i+1);
        scanf("%d",&Etu.note[i]);
    }
    printf("Les information d'etudiant Etu est : \n");
    printf("Nom    : %s\n",Etu.nom);
    printf("Prenon : %s\n",Etu.prenon);
    printf("Notes  : ");
    for ( i = 0; i < 10; i++)
    {
        printf("%d  ",Etu.note[i]);
    }
    return 0;
}
#include<stdio.h>

typedef struct 
{
    int lon;
    int lar;
}rectangle;

int Aire(rectangle a);

int main()
{
    rectangle A;
    printf("Donner la longueur de A : ");
    scanf("%d",&A.lon);
    printf("Donner la longueur de A : ");
    scanf("%d",&A.lar); 
    printf("L'Aire de rectangle A est : %d",Aire(A));   
    return 0;
}

int Aire(rectangle a)
{
    int x,y;
    x = a.lon;
    y = a.lar;
    return x*y;
}
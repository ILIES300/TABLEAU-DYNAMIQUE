#include <stdio.h>
#include <malloc.h>
#include <string.h>
typedef struct Etudiant {
     int age ;float moy ; char nom [50];
}Etudiant ;
int main ()
{
    int n , i ;
    printf("***** TABLEAU DYNAMIQUE *****\n");
    Etudiant *p ;
    printf("donner le nombre des etudiants : ");
    scanf("%d",&n);
    p=(Etudiant*) malloc (n*sizeof(Etudiant));
    for(i=0;i<n;i++)
    {
       printf("\n*donner le nom de Etudiant      N %d :",i+1);scanf("%s",&(p+i)->nom);
       printf("\n*donner l'age de etd Etudiant   N %d :",i+1) ; scanf("%d",&(p+i)->age);
       printf("\n*donner la moyenne de Etudiant  N %d :",i+1) ;scanf("%f",&(p+i)->moy);

        getchar ();
    }
        for(i=0;i<n;i++)
    {
       printf("\n -> le nom de Etudiant     N%d est :  %s ",i+1,(p+i)->nom);
       printf("\n -> l'age de etd Etudiant  N%d est :  %d",i+1,(p+i)->age);
       printf("\n -> la moyenne de Etudiant N%d est :   %.2f",i+1,(p+i)->moy);
    }
    free (p);
    getchar ();
    return 0 ;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char prenom[50];
    int age;
    int annee_actuelle = 2026;

    printf("Bonjour, quel est votre prénom ?\n");
    scanf("%s", prenom);

    printf("Bonjour %s, quel est votre âge ?\n", prenom);
    scanf("%d", &age);

    printf("%s, si vous êtes de la fin d'année, votre année de naissance est %d sinon %d.\n",
           prenom, annee_actuelle - age - 1, annee_actuelle - age);

   
    exit(0);
}

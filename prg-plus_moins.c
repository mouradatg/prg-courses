#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int nombre_mystere = 0, nombre_utilisateur = 0, compteur_coups = 0, continuer_partie = 1;
    const int MAX = 100, MIN = 1;

    // Boucle continuer la partie
    do {

    // Générateur de nombre aléatoirement
    srand(time(NULL));
    nombre_mystere = (rand() % (MAX - MIN + 1)) + MIN;

    // Message d'accueil pour indiqué les consignes
    printf("Consignes = Basique, un nombre est défini entre %d et %d, à toi de le trouver ;)\n\n", MIN, MAX);

    // Boucle du jeu : Redemande la question.
    do {

    compteur_coups++;

    printf("A votre avis quel est le nombre mystère ? :");
    scanf("%d", &nombre_utilisateur);

    if (nombre_utilisateur < nombre_mystere)
    {
        printf("C'est beaucoup plus mon poto !\n");
    }
    else if (nombre_utilisateur > nombre_mystere)
    {
        printf("C'est moins mon petit !\n");
    }
    else
    {
        printf("\nHey mon pote, ta trouver le bon numéro ;). Ta vraiment rien d'autre à faire ? héhé :D\n");
    }

    } while (nombre_mystere != nombre_utilisateur);


    printf("P.S.: Tu a trouver le résultat en %d coups.\n", compteur_coups);

    // Demande à l'utilisateur si il veux continuer la partie ?
    printf("Au fait, Tu veux encore perdre ton temps ? Si oui éctit (1) si non écrit (0) :");
    scanf("%d", &continuer_partie);

    if (continuer_partie)
    {
        printf("\nC'est repartie, on est des fou !! /D");
    }
    else
    {
        printf("\nMerci d'avoir participer au projet ;) A plus !");
    }

    } while (continuer_partie != 0);
    printf("\n");

    return 0;
}

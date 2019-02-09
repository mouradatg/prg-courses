#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int nombre_mystere = 0, nombre_utilisateur = 0, compteur_coups = 0, continuer_partie = 1, choix_utilisateur = 0;
    int nombre_mystere_mod2 = 0;
    const int MAX = 100, MIN = 1;

    // Boucle continuer la partie
    do {

    // Menu choix du joueur
    printf("\n\n=== MENU CHOIX JOUEUR ===\n");
    printf("Salut toi, il est temps de choisir le nombre de joueur !\n");
    printf("1. Je suis seul au monde j'ai pas d'amis mec !\n");
    printf("2. On est 2 je suis là avec une amie ;)\n");
    printf("=============================================================");
    printf("\nTon choix : ");
    scanf("%d", &choix_utilisateur);

    if (choix_utilisateur == 1)
    {
        // Générateur de nombre aléatoirement
        srand(time(NULL));
        nombre_mystere = (rand() % (MAX - MIN + 1)) + MIN;
    }
    else if (choix_utilisateur = 2)
    {
        printf("Demande à ton ami de définir un nombre \nentre %d et %d si ce n'est pas trop demandé ! ;)\n", MIN, MAX);
        printf("\nLe nombre :");
        scanf("%d", &nombre_mystere);
    }
    else
    {
        printf("\nJ'ai rien capté à ce que tu a écrit je supose \nque tu n'a pas osé me dire que tu était tout seul.\n");
        srand(time(NULL));
        nombre_mystere = (rand() % (MAX - MIN + 1)) + MIN;
    }
    printf("-------------------------------------------------------------\n");

    // Message d'accueil pour indiqué les consignes
    printf("Consignes = Basique, un nombre est défini entre %d et %d,\n à toi de le trouver ;)\n\n", MIN, MAX);

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
    printf("Au fait, Tu veux encore perdre ton temps ? Si Oui éctit (1) si Non écrit (0) :");
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

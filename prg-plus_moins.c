#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int nombre_mystere = 0, nombre_utilisateur = 0, compteur_coups = 0, continuer_partie = 1, choix_utilisateur = 0;
    int choix_niveau = 0;
    int MAX = 100, MIN = 1;
    char prenom1[100], prenom2[100];

    // Boucle continuer la partie
    do {

    do {
    printf("Salut toi, choisi ton niveau de difficulté.\n");
    printf("1. Le nombre sera entre 1 et 100\n");
    printf("2. Le nombre sera entre 1 et 1 000\n");
    printf("3. Le nombre sera entre 1 et 10 000\n");
    printf("Ton choix : ");
    scanf("%d", &choix_niveau);
    } while (choix_niveau < 1 || choix_niveau > 3);
    printf("-------------------------------------------------------------\n");
    switch(choix_niveau)
    {
    case 1:
        MAX = 100;
    break;
    case 2:
        MAX = 1000;
    break;
    case 3:
        MAX = 10000;
    break;
    default:
        MAX = 100;
    break;
    }

    do {
    // Menu choix du joueur
    printf("=== MENU CHOIX JOUEUR ===\n");
    printf("J'ai pas fini de te casser les bonbons, il est temps de choisir le nombre de joueur !\n");
    printf("1. Je suis seul au monde j'ai pas d'amis !\n");
    printf("2. On est 2 je suis là avec un(e) ami(e) ;)\n");
    printf("=============================================================");
    printf("\nTon choix : ");
    scanf("%d", &choix_utilisateur);
    } while (choix_utilisateur < 1 || choix_utilisateur > 2);

    printf("\nComment tu t'apelle poto ? ");
    scanf("%s", &prenom1);
    if (choix_utilisateur == 2)
    {
        printf("\nComment s'apelle ton/ta partenaire ? ");
        scanf("%s", &prenom2);
    }

    if (choix_utilisateur == 1)
    {
        // Générateur de nombre aléatoirement
        srand(time(NULL));
        nombre_mystere = (rand() % (MAX - MIN + 1)) + MIN;
    }
    else
    {
        printf("%s, demande à %s de définir un nombre \nentre %d et %d si ce n'est pas trop demandé ! ;)\n",prenom1, prenom2, MIN, MAX);
        printf("\nLe nombre :");
        scanf("%d", &nombre_mystere);
    }

    printf("-------------------------------------------------------------\n");

    // Menu choix de difficulté



    // Message d'accueil pour indiqué les consignes
    if (choix_utilisateur == 1)
    {
    printf("Consignes = Basique, un nombre est défini entre %d et %d,\n à toi de le trouver ;)\n\n", MIN, MAX);
    }
    else
    {
    printf("Consignes = %s a défini un nombre entre %d et %d,\n à toi de le trouver ;)\n\n", prenom2, MIN, MAX);
    }



    // Boucle du jeu : Redemande la question.
    do {

    compteur_coups++;

    printf("%s, A votre avis quel est le nombre mystère ? :", prenom1);
    scanf("%d", &nombre_utilisateur);

    if (nombre_utilisateur < nombre_mystere)
    {
        printf("%s, C'est plus mon/ma poto !\n", prenom1);
    }
    else if (nombre_utilisateur > nombre_mystere)
    {
        printf("C'est moins mon/ma petit %s !\n", prenom1);
    }
    else
    {
        printf("\nHey mon pote, ta trouver le bon numéro ;). %s, ta vraiment rien d'autre à faire ? héhé :D\n", prenom1);
    }

    } while (nombre_mystere != nombre_utilisateur);


    printf("P.S.: %s a trouver le résultat en %d coups.\n", prenom1, compteur_coups);

    // Demande à l'utilisateur si il veux continuer la partie ?
    do {
    printf("Au fait, Tu veux encore perdre ton temps ? Si Oui éctit (1) si Non écrit (0) :");
    scanf("%d", &continuer_partie);
    } while (continuer_partie < 0 || continuer_partie > 1);

    if (continuer_partie)
    {
        printf("\nC'est repartie, on est des fou !! /D\n\n");
    }
    else
    {
        printf("\nMerci d'avoir participer au projet ;) A plus !");
    }

    } while (continuer_partie != 0);
    printf("\n");

    return 0;
}

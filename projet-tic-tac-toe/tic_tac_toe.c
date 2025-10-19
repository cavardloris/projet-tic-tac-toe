#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "tic_tac_toe.h"
#include <stdbool.h>
char tic_tac_toe()
{
    char grid[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    printf("Bienvenue dans le jeu du morpion !\n");
    int choix;
    int win = 0;
    int choix_bot;

    while(win == 0)
    {
       printf(" %c | %c | %c\n", grid[0], grid[1], grid[2]);
       printf("---|---|---\n");
       printf(" %c | %c | %c\n", grid[3], grid[4], grid[5]);
       printf("---|---|---\n");
       printf(" %c | %c | %c\n", grid[6], grid[7], grid[8]);
       printf("Choisissez la case sur laquelle vous souhaitez jouer parmi celles disponibles (entre 0 et 8)\n");
       scanf("%d", &choix);
        if (( choix % 1 != 0) || (choix< 0) || (choix > 8) || ( grid[choix] != ' '))
        {
            printf("Erreur ce n'est pas bon\n");
        }
        else
        {
            grid[choix] = 'x';
            srand(time(NULL));
            choix_bot = rand() % 9;
            while(grid[choix_bot] != ' ')
            {
                choix_bot = rand() %9;
            }
            grid[choix_bot] = 'o';

            
        }
        if (((grid[0] == 'x') && (grid[1] == 'x') && (grid[2] == 'x')) ||
        ((grid[3] == 'x') && (grid[4] == 'x') && (grid[5] == 'x')) ||
        ((grid[6] == 'x') && (grid[7] == 'x') && (grid[8] == 'x')) ||
        ((grid[0] == 'x') && (grid[3] == 'x') && (grid[6] == 'x')) ||
        ((grid[1] == 'x') && (grid[4] == 'x') && (grid[7] == 'x')) ||
        ((grid[2] == 'x') && (grid[5] == 'x') && (grid[8] == 'x'))||
        ((grid[0] == 'x') && (grid[4] == 'x') && (grid[8] == 'x')))
        {
            printf("Vous avez gagné\n");
            win += 1;
        }
        else if(((grid[0] == 'o') && (grid[1] == 'o') && (grid[2] == 'o')) ||
        ((grid[3] == 'o') && (grid[4] == 'o') && (grid[5] == 'o')) ||
        ((grid[6] == 'o') && (grid[7] == 'o') && (grid[8] == 'o')) ||
        ((grid[0] == 'o') && (grid[3] == 'o') && (grid[6] == 'o')) ||
        ((grid[1] == 'o') && (grid[4] == 'o') && (grid[7] == 'o')) ||
        ((grid[2] == 'o') && (grid[5] == 'o') && (grid[8] == 'o')) ||
        ((grid[0] == 'o') && (grid[4] == 'o') && (grid[8] == 'o')))
        {
            printf("L'ordinateur a gagné,vous avez perdu\n");
            win += 1;
        }
        else if((grid[0] != ' ' ) && (grid[1] != ' ' ) && (grid[2] != ' ' ) && (grid[3] != ' ' ) && (grid[4] != ' ' ) &&(grid[5] != ' ' )
        && (grid[6] != ' ' ) && (grid[7] != ' ' ) && (grid[8] != ' ' ))
        {
            printf("Aucun vainqueur, match nul");
            win += 1;
        }

    } 
    printf(" %c | %c | %c\n", grid[0], grid[1], grid[2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c\n", grid[3], grid[4], grid[5]);
    printf("---|---|---\n");
    printf(" %c | %c | %c\n", grid[6], grid[7], grid[8]);   
}
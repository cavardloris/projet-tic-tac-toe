#include <stdio.h>
#include <stdbool.h>

char recherche(int val, int tab[], int taille)
{
    int i = 0;
    while (i < taille)
    {
        if (tab[i] == val)
        {
            return true;
        }
        i++;
    }
    return false;
}

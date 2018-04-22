#include <stdio.h>
#include "board_print_plain.h"

void board_print_plain(char place[][8])
{
    FILE *pf; 
    int i, j;
    pf=fopen("new1.txt","w");
    for (i = 0; i<8; i++)
    {
        fprintf(pf,"%d ",i+1);
        for (j = 0; j < 8; j++)
        {
           fprintf(pf, "%c ", place[i][j]);
        }
        fprintf(pf, "\n");
    }
    fprintf(pf, "  A B C D E F G H\n");
    fclose(pf);
}

void board_print_plain_Move(char Move[])
{
     FILE *pf;
     pf=fopen("new1.txt","a");
     fprintf(pf, "%s\n",Move);
     fclose(pf);
}


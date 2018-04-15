#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include "board.h"

void board(char place[][8])
{
    place[0][0] = 'R';
    place[0][1] = 'N'; 
    place[0][2] = 'B';
    place[0][3] = 'Q'; 
    place[0][4] = 'K'; 
    place[0][5] = 'B';
    place[0][6] = 'N'; 
    place[0][7] = 'R';
    place[7][0] = 'r';
    place[7][1] = 'n'; 
    place[7][2] = 'b';
    place[7][3] = 'q'; 
    place[7][4] = 'k'; 
    place[7][5] = 'b';
    place[7][6] = 'n'; 
    place[7][7] = 'r';
    for (int i = 0; i<8; i++)
       {
             place[1][i] = 'P';
             place[6][i] = 'p';
       }
    for (int j = 2; j < 6; j++)
    {
        for (int i = 0; i<8; i++)
        place[j][i] = ' ';
    }
}

void CheckIn(char Move[], char place[][8])
{
     if ((strlen(Move)==5) && (Move[2]=='-')
     && ((int)(Move[1])>48) && ((int)(Move[1])<57) 
     && ((int)(Move[4])>48) && ((int)(Move[4])<57)
     && ((int)(Move[0])<73) && ((int)(Move[0])>64) 
     && ((int)(Move[3])<73) && ((int)(Move[3])>64)) {
        int c1 = (int)(Move[0]) - 65;
        int c2 = (int)(Move[3]) - 65;
        int n1 = (int)(Move[1]) - 49;
        int n2 = (int)(Move[4]) - 49;
        char t = place[n1][c1];
        place[n1][c1] = place[n2][c2];
        place[n2][c2] = t;
        for (int i = 0; i<8; i++)
        {
           printf("%d ",i+1);
           for (int j = 0; j < 8; j++)
           printf("%c ",place[i][j]);
           printf("\n");
        }
        printf("  A B C D E F G H\n");
    }
    else puts("Incorrect input");
}

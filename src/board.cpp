#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "board.h"

int flag = 1;

void printboard(char place[][8])
{
    for (int i = 0; i<8; i++)
    {
        printf("%d ",i+1);
        for (int j = 0; j < 8; j++)
        {
           printf("%c ", place[i][j]);
        }
        printf("\n");
    }
    printf("  A B C D E F G H\n");
}

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

bool CheckInMove(char Move[], char place[][8])
{
     int c1 = (int)(Move[0]) - 65;
     int c2 = (int)(Move[3]) - 65;
     int n1 = (int)(Move[1]) - 49;
     int n2 = (int)(Move[4]) - 49;
     char figure = place[n1][c1];
     switch(figure)
     {
        case 'p': if (n1 == 6)
             { if ((((n1 - n2) < 3)&&((n1 - n2) > 0))&& flag == 0) return true; }
             if ((((n1 - n2) < 2)&&((n1 - n2) > 0))&& flag == 0) return true;
        case 'P': if (n1 == 1 && flag == 1)
             { if ((((n2 - n1) < 3)&&((n2 - n1) > 0))&& flag == 1) return true; }
             if ((((n2 - n1) < 2)&&((n2 - n1) > 0))&& flag == 1) return true;
        default: return false;
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
        if(CheckInMove(Move, place))
        {
           place[n2][c2] = place[n1][c1];
           place[n1][c1] = ' ';
           flag = 1 - flag;
           printboard(place);
        }
        else
        printf("Incorrect move\n");
    }
    else puts("Incorrect input\n");
}

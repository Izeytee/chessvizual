#include<stdlib.h>
#include<stdio.h>

int main()

{   
    char place[8][8];
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
    for (int i = 0; i<8; i++)
    {
        for (int j = 0; j < 8; j++)
        printf("%c ",place[i][j]);
        printf("\n");
    }
}

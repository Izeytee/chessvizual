#include <stdio.h>
#ifndef _MYPROJECT_board_print_plain_cpp
#define _MYPROJECT_board_print_plain_cpp
void board_print_plain(char place[][8])
{
    FILE *pf; 
    pf=fopen("new1.txt","w");
    for (int i = 0; i<8; i++)
    {
        fprintf(pf,"%d ",i+1);
        for (int j = 0; j < 8; j++)
        {
           fprintf(pf,"%c ",place[i][j]);
        }
        fprintf(pf,"\n");
    }
    fprintf(pf,"  A B C D E F G H\n");
    fclose(pf);
}
#endif

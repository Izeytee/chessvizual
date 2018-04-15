#include <stdio.h>
#include <board.cpp>
#include <board_print_plain.cpp>
#include "board.h"
#include "board_print_plain.h"

int main()
{   
    char place[8][8];
    board(place); 
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
    board_print_plain(place);
    char Move[5];
    while(1)
    {
            scanf("%s", Move);
            CheckIn(Move, place);
            board_print_plain(place);
    }
}



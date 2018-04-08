#include <board.cpp>

int main()

{
    char place[8][8];
    board(place);
    for (int i = 0; i<8; i++)
    {
        for (int j = 0; j < 8; j++)
        printf("%c ",place[i][j]);
        printf("\n");
    }
}

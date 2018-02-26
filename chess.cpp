#include<stdlib.h>
#include<stdio.h>

int main()
{
    printf("8 R N B Q K B N R\n");
    printf ("7 ");
    for (int i = 0; i<8; i++)
    printf ("P ");
    printf ("\n");
    for (int i = 6; i>2; i--)
    printf("%d\n",i);
    printf ("2 ");
    for (int i = 0; i<8; i++)
    printf ("p ");
    printf ("\n");
    printf("1 r n b q k b n r\n");
    system("PAUSE");
}

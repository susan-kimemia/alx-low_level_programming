#include "main.h"

/**
 * print_chessboard - main prints chessboard using _putchar
 *
 * @a: array that's holding chessboard
 */

void print_chessboard(char (*a)[8])
{
unsigned int m, n;
m = 0;
while (m < 8)
{
n = 0;
while (n < 8)
{
_putchar(a[m][n]);
n++;
}
_putchar('\n');
m++;
}
}


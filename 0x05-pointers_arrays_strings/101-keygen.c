#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints the password
 * Return: int 0;
 */
int main(void)
{
char str[500];
int i = 0, rndm = 0, sum = 0;
srand(time(NULL));
for (i = 0; sum <= 2644; i++)
{rndm = (rand() % 25) + 65;
str[i] = rndm;
sum = sum + rndm;
}
str[i++] = 2772 - sum;
str[i++] = '\0';
printf("%s\n", str);
return (0);
}


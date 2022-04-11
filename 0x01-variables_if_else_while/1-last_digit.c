#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - prints the last digit of the random number stored in the variable n
 *
 * return: always 0
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("last digit of %d is %d", n, n % 10,
((n % 10) == 0) ? "and is 0"
: (((n % 10) > 5) ? "and is greater than 5"
: "and is less than 6 and not 9"));

return (0);
}

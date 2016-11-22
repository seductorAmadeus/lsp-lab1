#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define IS_PRIME 1
#define ITS_NOT_PRIME 0

int is_prime(unsigned long);

int main(int argc, char **argv)
{
    unsigned long num;
    char str[128];
    scanf("%s", str);
    if (!(num = strtoul(str, NULL, 0)))
    {
        printf("Not unsigned long value!");
    }
    is_prime(num) == IS_PRIME ? printf("YES") : printf("NO");
    return 0;
}

int is_prime(unsigned long num)
{
    unsigned long i;
    for (i = 2; i < sqrt(num); i++)
        return num % i ? ITS_NOT_PRIME : IS_PRIME;
    return 3;
}
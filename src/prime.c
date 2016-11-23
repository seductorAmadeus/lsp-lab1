#include <stdio.h>
#include <stdlib.h>

#define IS_PRIME 1
#define ITS_NOT_PRIME 0

int is_prime(unsigned long);

int main(int argc, char **argv)
{
    unsigned long num;
    char str[128], *end;
    scanf("%s", str);
    if (!(num = strtoul(str, &end, 10)) || *str == '-' || (end + 1) == '\000' )
    {
        printf("Not unsigned long value!");
        return 1;
    }
    is_prime(num) == IS_PRIME ? printf("YES") : printf("NO");
    return 0;
}

int is_prime(unsigned long num)
{
    unsigned long i;
    for (i = 2; num >= i * i; i++)
        if (0 == num % i)
        {
            return ITS_NOT_PRIME;
        }
    return IS_PRIME;
}
#include <stdio.h>
#include <stdlib.h>

#define IS_PRIME 1
#define ITS_NOT_PRIME 0

double sum(const double *, size_t);

int is_prime(unsigned long);

/*int main(int agrc, char **argv)
{
    int value;
    double input_buffer[5] = {0, 1, 5, 3, 4};
    double *ptr = NULL;
    double result_of_sum;
    printf("Please, enter int value: ");
    scanf("%d", &value);
    ptr = (double *) malloc(10 * sizeof(double));
    result_of_sum = sum(input_buffer, sizeof(input_buffer) / sizeof(double));
    printf("%lf\n", result_of_sum);
    result_of_sum = sum(ptr, sizeof(ptr));
    printf("%lf\n", result_of_sum);
    free(ptr);
    return 0;
}*/
int main(int agrc, char **argv)
{
    unsigned long num;
    char str[128];
    scanf("%s", str);
    if (!(num = strtoul(str, NULL, 0)))
    {
        printf("Not unsigned long value!");
    }
    is_prime(num) ? printf("YES") : printf("NO");
    return 0;
}

double sum(const double *input_buffer, size_t input_buffer_size)
{
    double sum = 0;
    int i;
    for (i = 0; i < input_buffer_size; i++)
    {
        sum += *(input_buffer + i);
    }
    return sum;
}

int is_prime(unsigned long num)
{
    return (1) ? IS_PRIME : ITS_NOT_PRIME;
}
#include <stdio.h>
#include <stdlib.h>

#define IS_PRIME 1
#define ITS_NOT_PRIME 0

int sum(const int *, size_t);

int main(int agrc, char **argv)
{
    int value;
    int input_buffer[5] = {0, 1, 5, 3, 4};
    int *ptr = NULL;
    int result_of_sum;
    printf("Please, enter int value: ");
    scanf("%d", &value);
    ptr = (int *) malloc(10 * sizeof(int));
    result_of_sum = sum(input_buffer, sizeof(input_buffer) / sizeof(int));
    printf("%d\n", result_of_sum);
    result_of_sum = sum(ptr, sizeof(ptr) / sizeof(int));
    printf("%d\n", result_of_sum);
    free(ptr);
    return 0;
}

int sum(const int *input_buffer, size_t input_buffer_size)
{
    int sum = 0;
    int i;
    for (i = 0; i < input_buffer_size; i++)
    {
        sum += *(input_buffer + i);
    }
    return sum;
}

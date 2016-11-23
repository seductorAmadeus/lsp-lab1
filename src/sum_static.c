#include <stdio.h>

int sum(const int *, const size_t);

int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

int main(int agrc, char **argv)
{
    int result_of_sum;
    result_of_sum = sum(array, sizeof(array) / sizeof(int));
    printf("%d\n", result_of_sum);
    return 0;
}

int sum(const int *input_buffer, const size_t input_buffer_size)
{
    int sum = 0;
    int i;
    for (i = 0; i < input_buffer_size; i++)
    {
        sum += *(input_buffer + i);
    }
    return sum;
}

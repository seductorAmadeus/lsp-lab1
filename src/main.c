#include <stdio.h>
#include <stdlib.h>

double sum (const double *, size_t);

int main (int agrc, char** argv)
{
    int value;
    double input_buffer[5] = {0, 1, 5, 3, 4};
    double *ptr = NULL;
    double result_of_sum;
    printf ("Please, enter int value: ");
    scanf ("%d", &value);

    ptr = (double*) malloc (10 * sizeof (double));

    ptr[0] = 12;
    ptr[1] = 45;

    result_of_sum = sum (input_buffer, sizeof (input_buffer) / sizeof (double));
    printf ("%lf\n", result_of_sum);
    result_of_sum = sum (ptr, sizeof(ptr));
    printf ("%lf\n", result_of_sum);
    free (ptr);
    return 0;
}

double sum (const double* input_buffer, size_t input_buffer_size)
{
    double sum = 0;
    int i;
    printf ("Array's length: %d\n", (int) input_buffer_size);
    for (i = 0; i < input_buffer_size; i++)
    {
        sum += *(input_buffer + i);
    }
    return sum;
}
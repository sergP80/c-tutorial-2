#include "app.h"

int main()
{
    int rows = 5, cols = 4;

    int ** matrix = (int**) calloc(rows, sizeof(int*));

    int success_memory = 1;
    if (!matrix)
    {
        printf("Failed to allocate memory for matrix\n");
        success_memory = 0;
    }

    for (int i = 0; success_memory && i < rows; i++)
    {
        matrix[i] = (int*) calloc(cols, sizeof(int));
        if (!matrix[i])
        {
            success_memory = 0;
            printf("Failed to allocate memory for matrix row[%d]\n", i);
            break;
        }
    }

    if (!success_memory)
    {

    }

    srand(time(NULL));

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            matrix[i][j] = rand() % 101 - 50;

            // matrix[i][j] = i + j + 2;
        }
    }

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            printf("%d\t", matrix[i][j]);
        }

        printf("\n");
    }

    for (int i = 0; i < rows; i++)
    {
        free(matrix[i]);
    }

    free(matrix);

    return 0;
}

#include <stdio.h>

void main()
{
    int A,j, i;
    
    for (i = 1; i < 11; i++)
    {
        for (j = 1; j < 11; j++)
        {
            printf("%d X %d = %d\n", i, j, i*j);
        }
    }
    

    return;
}
#include <stdlib.h>
/**
 *alloc_grid - creates 2D array of integers
 *@width: width
 *@height: height
 *Return: array
 */
int **alloc_grid(int width, int height)
{
int i, j, **o;

if (width <= 0 || height <= 0)
return (NULL);
o = malloc(height * sizeof(int *));
if (o == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
o[i] = malloc(width * sizeof(int));
if (o[i] == NULL)
{
i--;
while (i >= 0)
{
free(o[i]);
i--;
}
free(o);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
o[i][j] = 0;
}
return (o);
}


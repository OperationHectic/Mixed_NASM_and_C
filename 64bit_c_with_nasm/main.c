#include <stdio.h>

const int width = 4;
const int height = 4;

int add(int a, int b);
int sub(int a, int b);

int rotate(int grid[width][height], int px, int py, int rot)
{
    switch(rot % 4)
    {
         case 0: return grid[px][py];
         case 1: return grid[py][width - 1 - px];
         case 2: return grid[width - 1 - px][height -1 - py];
         case 3: return grid[height - 1 - py][px];
    }
}

int main(void)
{
    int grid[width][height];
    for (int j = 0; j < height; j++)
    {
        for (int i = 0; i < width; i++)
        {
            grid[i][j] = width * j + i;
        }
    }

    for (int k = 0; k < 4; k++)
    {
        for (int j = 0; j < height; j++)
        {
            for (int i = 0; i < width; i++)
            {
                printf("%2d ", rotate(grid, i, j, k));
            }
            printf("\n");
        }
        printf("\n");
    }
    //printf("Add is %d\n", add(4, 5));
    //printf("Sub is %d\n", sub(3, 6));
    return 0;
}

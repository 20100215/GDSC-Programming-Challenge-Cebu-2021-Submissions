#include <stdio.h>
void main()
{
    int x, y, a, b;
    int yes = 1;
    float nval, nctr = 1.0;
    scanf("%d %d", &y, &x);
    nval = (float)y / (float)x;
    if (x >= 1 && y >= 1)
    {
        for (a = 1; a <= x; a++)
        {
            for (b = 1; b <= y; b++)
            {
                if (b == (int)nctr && yes == 1)
                    printf(" ");
                else
                    printf("*");
            }
            printf("\n");
            if ((int)nctr == (int)(nctr + nval))
                yes = 0;
            else
                yes = 1;
            nctr += nval;
        }
    }
}

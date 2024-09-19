void ft_swap(int *a, int *b)
{
    int swp;

    swp = *a;
    *a = *b;
    *b = swp;
}

#include <stdio.h>

int main()
{
    int x = 2;
    int y = 5;
    ft_swap(&x, &y);
    printf("%d\n%d\n", x, y);
}
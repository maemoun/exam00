#include <stdlib.h>

int *ft_rrange(int start, int end)
{
    int i = 0;
    int *tab;
    int size = end - start;
    if (size < 0)
    {
        size *= -1;
    }
    size++;
    tab = malloc(size * 4);
    if (tab == NULL)
        return(0);
    if (start == end)
        tab[i] = end;
    else if (end > start)
    {
        while(i < size)
        {
            tab[i] = end;
            end--;
            i++;
        }
    }
    else if (end < start)
    {
        while (i < size)
        {
            tab[i] = end;
            end++;
            i++;
        }
    }
    return (tab);
}

#include <stdio.h>

int main()
{
    int *tab = ft_rrange(0, -3);
    int i = 0;
    while(i < 4)
    {
        printf("%d\n", tab[i]);
        i++;
    }
    free (tab);
}
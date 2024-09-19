#include <stdlib.h>

int *ft_range(int start, int end)
{
    int i = 0;;
    int *tab;
    int size = end - start;
    if (size < 0)
    {
        size *= -1;
    }
    size++;
    tab = malloc(4 * size);
    if (tab == NULL)
        return(NULL);
    if (start == end)
    {
        tab[i] = start;
        return(tab);
    }
    else if (start > end)
    {
        i = 0;
        while(i < size)
        {
            tab[i] = start;
            start--;
            i++;
        }
    }
    else if (start < end)
    {
        i = 0;
        while(i < size)
        {
            tab[i] = start;
            start++;
            i++;
        }
    }
    return(tab);
}

#include <stdio.h>

int main()
{
    int *tab = ft_range(0, -3);
    int i = 0;
    while(i < 4)
    {
        printf("%d\n", tab[i]);
        i++;
    }
    free (tab);
}
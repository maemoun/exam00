#include <stdlib.h>

char *ft_itoa(int nb)
{
    char *str;
    int n = nb;
    int len = 0;
    if (n < 0)
    {
        len = 1;
        n = -n;
    }
    else if (n == 0)
        len = 1;
    while(n > 0)
    {
        n = (n / 10);
        len++;
    }
    str = malloc(len + 1);
    if (str == NULL)
        return(NULL);
    str[len] = '\0';
    if (nb == 0)
    {
        str[0] = '0';
    }
    else if(n < 0)
    {
        str[0] = '-';
        nb = -nb;
    }
    else if (nb > 0)
    {
        str[len] = (nb % 10) + 48;
        nb = nb / 10;
        len--;
    }
    return(str);
}

#include <stdio.h>

int main()
{
    printf("%s\n", ft_itoa(123));
}
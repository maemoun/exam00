#include <unistd.h>

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return(i);
}

void ft_putstr(char *str)
{
    int i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    int i = 0;
    int nb = 0;
    int size = ft_strlen(av[1]);
    if (ac == 2)
    {
        while(i < size / 2)
        {
            if (av[1][i] == av[1][size - 1 - i])
                nb++;
            i++;
        }
        if (nb == size / 2)
        {
            ft_putstr(av[1]);
            write(1, "\n", 1);
            return(0);
        }
        write(1, "\n", 1);
    }
    else
        write(1, "\n", 1);
}
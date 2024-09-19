#include <unistd.h>

void ft_putstr(char *str)
{
    int i = 0;
    while(str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

int ft_strlen(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return(i);
}

int main(int ac, char **av)
{
    int i = 0;
    int j = 0;
    int nb = 0;
    int len = ft_strlen(av[1]);
    if (ac == 3)
    {
        while(av[1][i])
        {
            while(av[2][j])
            {
                if (av[1][i] == av[2][j])
                {
                    nb++;
                    j++;
                    break;
                }
                j++;
            }
            i++;
        }
        if (nb == len)
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
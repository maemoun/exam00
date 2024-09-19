#include <unistd.h>

void    ft_check(char *str)
{
    int i = 0;
    while(str[i])
    {
        if (str[i] == 'a')
            write(1, "a", 1);
        if (str[i] == 'A')
            write(1, "A", 1);
        if (str[i] == 'b')
            write(1, "bb", 2);
        if (str[i] == 'B')
            write(1, "BB", 2);
        if (str[i] == 'c')
            write(1, "ccc", 3);
        if (str[i] == 'C')
            write(1, "CCC", 3);
        if (str[i] == 'd')
            write(1, "dddd", 4);
        if (str[i] == 'D')
            write(1, "DDDD", 4);
        if (str[i] == 'e')
            write(1, "eeeee", 5);
        if (str[i] == 'E')
            write(1, "EEEEE", 5);
        if (str[i] == 'f')
            write(1, "ffffff", 6);
        if (str[i] == 'F')
            write(1, "FFFFFF", 6);
        if (str[i] == 'g')
            write(1, "ggggggg", 7);
        if (str[i] == 'G')
            write(1, "GGGGGGG", 7);
        if (str[i] == 'h')
            write(1, "hhhhhhhh", 8);
        if (str[i] == 'H')
            write(1, "HHHHHHHH", 8);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
    {
        ft_check(av[1]);
        write(1, "\n", 1);
    }
    else
        write(1, "\n", 1);
}
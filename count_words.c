#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int nb = 0;
    if (ac == 2)
    {
        if (av[1][i] != ' ')
        {
            nb++;
            i++;
        }
        while(av[1][i])
        {
            if(av[1][i] == ' ' && av[1][i + 1] != ' ' && av[1][i + 1])
                nb++;
            i++;
        }
        return(nb);
    }
    else
        write(1, "\n", 1);
}
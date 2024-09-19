#include <unistd.h>
#include <stdio.h>

int ft_check(char c)
{
    if (c >= 'A' && c <= 'Z')
        c += 32;
    return(c);
}

int main(int ac, char **av)
{
    int i = 0;
    int arr[26] = {0};
    if (ac == 2)
    {
        while(av[1][i])
        {
            char c = ft_check(av[1][i]);
            if(c >= 'a' && c <= 'z')
            {
                arr[c - 'a']++;
            }
            i++;
        }
        int sep = 0;
        int j = 0;
        while(j < 26)
        {
            if (arr[j] > 0)
            {
                if (sep > 0)
                {
                    printf(", ");
                }
                printf("%d%c", arr[j], 'a' + j);
                sep++;
            }
            j++;
        }
        printf("\n");
    }
    else
        write(1, "\n", 1);
}
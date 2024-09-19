int occ_z(char *str)
{
    int i = 0;
    int nb = 0;
    while(str[i])
    {
        if (str[i] == 'z')
            nb++;
        i++;
    }
    return(nb);
}

#include <stdio.h>

int main()
{
    char s[] = "azazaz";
    printf("%d\n", occ_z(s));
}
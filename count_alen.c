int contalen(char *str)
{
    int i = 0;
    while(str[i])
    {
        if (str[i] == 'a' || str[i] == '0')
            break;
        i++;
    }
    return(i);
}

#include <stdio.h>

int main()
{
    char s[] = "bbbbbbb0b";
    printf("%d\n", contalen(s));
}
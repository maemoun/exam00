int ft_strlen(char *str)
{
    int i;
    i = 0;
    while(str[i])
    {
        i++;
    }
    return(i);
}

char    *ft_strrev(char *str)
{
    int i;
    int size;
    int swp;

    i = 0;
    size = ft_strlen(str);
    while (i < size / 2)
    {
        swp = str[i];
        str[i] = str[size - 1 - i];
        str[size - 1 - i] = swp;
        i++;
    }
    return(str);
}
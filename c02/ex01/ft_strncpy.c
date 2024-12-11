#include<stdio.h>

int ft_strlen(char *str)
{
    int a;
    a = 0;

    while(str[a] != '\0')
    {
        a++;
    }
    return a;
}

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    int i;
    i = 0;

    while(i < n && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    while(i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return dest;
}

int main()
{
    char x[50] = "Ismail";
    char y[] = "Bayram Bayram Bayram";
    ft_strncpy(x, y, 14);
    printf("%s\n", x);
    return 0;
}

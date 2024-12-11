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

char *ft_strcpy(char *dest, char *src)
{
    int a, b;

    a = ft_strlen(dest);
    b = ft_strlen(src);

    if(a >= b)
    {
        a = 0;
        b = 0;
        while (dest[a] != '\0')
        {
            dest[a] = src[b];
            a++;
            b++;
        }
    }
    else if(a < b)
    {
        a = 0;
        b = 0;
        while(src[b] != '\0')
        {
            dest[a] = src[b];
            a++;
            b++;
        }
    }

}

int main()
{
    char x[50] = "Ismail";
    char y[] = "Bayram Bayram Bayram";

    ft_strcpy(x, y);
    printf("%s\n", x);
    return 0;
}

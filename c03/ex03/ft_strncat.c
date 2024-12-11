#include<stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb)
{   
    unsigned int n = 0, i = 0;
    while(dest[n] != '\0')
    {
        n++;
    }

    while(src[i] != '\0' && i < nb)
    {
        dest[n] = src[i];
        i++;
        n++;
    }

    dest[n] = '\0';
    return dest;
}

int main()
{
    char a[50] = "My name is: ";
    char b[] = "Ismail";
    char * x = ft_strncat(a, b, 2);
    printf("%s\n", x);
    return 0;
}
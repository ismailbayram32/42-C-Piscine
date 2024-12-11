#include<stdio.h>

char *ft_strlowcase(char *str)
{
    int n = 0;

    while(str[n] != '\0')
    {
        if(str[n] >= 'A' && str[n] <= 'Z')
        {
            str[n] += 32;
        }
        n++;
    }
    return str;
}

int main()
{
    char dizin[] = "BAYRAM bayram";
    char *a = ft_strlowcase(dizin);
    printf("%s\n", a);
    return 0;
}
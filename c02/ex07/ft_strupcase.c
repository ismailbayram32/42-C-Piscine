#include<stdio.h>

char *ft_strupcase(char *str)
{
    int n = 0;

    while(str[n] != '\0')
    {
        if(str[n] >= 'a' && str[n] <= 'z')
        {
            str[n] -= 32;
        }
        n++;
    }
    return str;
}

int main()
{
    char dizin[] = "ismail ISMAIL";
    char *a = ft_strupcase(dizin);
    printf("%s\n", a);
    return 0;
}
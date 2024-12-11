#include<stdio.h>

char *ft_strcapitalize(char *str)
{
    int n = 1, a = 1;
    if(str[0] <= 'z' && str[0] >= 'a')
    {
        str[0] -= 32;
    }
    while(str[n] != '\0')
    {
        if(str[n] <= 'Z' && str[n] >= 'A')
        {
            str[n] += 32;
        }
       n++;
    }
    while(str[a] != '\0')
    {
        if((str[a] < 48 && str[a] > 31) && (str[a+1] <= 'z' && str[a+1] >= 'a'))
        {
            str[a + 1] -= 32;
        }
        a++;
    }
    return str;
}

int main()
{
    char dizin[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    char * a = ft_strcapitalize(dizin);
    printf("%s\n", a);
    return 0;
}

#include<stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned i = 0;

    while(i < size - 1 && src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int main()
{
    char hedef[] = "IsmailIsmailIsmail";
    char kaynak[] = "BayramBayramBayram";
    ft_strlcpy(hedef, kaynak, 10);
    printf("%s\n", hedef);
    return 0;
}
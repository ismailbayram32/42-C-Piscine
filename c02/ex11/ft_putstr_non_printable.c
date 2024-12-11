#include<unistd.h>

void put_hex(unsigned char c)
{
    char hex[2];
    char *base = "0123456789abcdef";

    hex[0] = base[c / 16];
    hex[1] = base[c % 16];
    write(1, hex, 2);
}

void ft_putstr_non_printable(char *str)
{
    int n = 0;
    while (str[n] != '\0')
    {
        if((str[n] >= 0 && str[n] <= 31) || str[n] == 127)
        {
            write(1, "\\", 1);
            put_hex((unsigned char) str[n]);
        }
        else
        {
            write(1, &str[n], 1);
        }
        n++;
    }
    write(1, "\n", 1);
}

int main()
{
    char * dizin = "Coucou\ntu vas bien ?";
    ft_putstr_non_printable(dizin);
    return 0;
}
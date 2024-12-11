#include<unistd.h>

void ft_cift_basamak(int c)
{
    int n;
    int i;
    
    n = c;
    i = 0;
    i = n / 10;

    i += 48;
    if (c >10)
        write(1, &i, 1);
    else
        write(1, "0", 1);
    i = c % 10;
    i += 48;
    write(1, &i, 1);
}

void ft_print_combn(int n)
{
    
}
    
int main()
{
    ft_print_combn(4);
    return 0;
}
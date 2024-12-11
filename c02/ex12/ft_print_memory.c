#include<unistd.h>
#include<stdio.h>

void *ft_print_memory(void *addr, unsigned int size)
{
    int n = 0, i = 0;
    char * p = (char *) addr;
    if(size != 0)
    {
        printf("%p: ", addr);
        while(n < size)
        {
            while(i < 16)
            {
                if (n + i < size)
                {
                    printf("%02x", (unsigned char)p[n + i]);
                    if(i % 2 == 1)
                    {
                        printf(" ");
                    }
                }
                else
                {
                    printf("   ");
                }
                i++;
            }
            if(!((p[n] < 32 && p[n] > 0) || (p[n] == 127) ))
            {
                printf("%c", p[n]);
            }
            else
            {
                printf(".");
            }
            n++;
        }
        printf("\n");
    }
}

int main()
{
    int size = 16;
    char dizin[] = "Bonjour les amin";
    char dizin2[] = "ches\t\n\tc est fo";
    ft_print_memory(dizin, size);
    ft_print_memory(dizin2, size);
    return 0;
}
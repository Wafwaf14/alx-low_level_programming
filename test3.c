#include <unistd.h>
void ft_putchar(char c)
{
 write(1,&c,1);
}
void ft_print_alphabet(void)
{
 int i = 1;
 while(i <= 9)

 {
         write(1,&i,1);
         i++;
 }
}
int main()
{
        ft_print_alphabet();
        ft_putchar('\n');
}


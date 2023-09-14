#include <unistd.h>
void ft_putchar(char c)
{
 write(1,&c,1);
}
void ft_print_alphabet(void)
{
 char i = 'A';
 while(i <= 'Z')
	
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



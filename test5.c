#include <unistd.h>
void ft_putchar(char c)
{
 write(1,&c,1);
}
void ft_print_comb(void)
{ int k ;
	for(int i=0;i<=9;i++)
	{
		for (int j=1; j<=8; j++)
		{
			for(k=2; k<=7 ;k++)
				write(1,&i,1);
				write(1,&j,1);
				write(1,&k,1);
		}
	}
}
int main()
{
        ft_print_comb();
        ft_putchar('\n');
}


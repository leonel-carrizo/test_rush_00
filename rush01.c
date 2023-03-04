#include <unistd.h>

void	ft_putchar(char c);
int	i, j, k, m, l;

int	rush(int x, int y)
{


	i = 2;
	while(i < y)
	{
	
	ft_putchar('/');

		//first colum
		j = 2;
		while(j < x)
		{
			ft_putchar('*');
			j++;
		}
	

	ft_putchar(92);
	ft_putchar(10);
		//central
		k = 2;
		while(k < y)
		{
		
		ft_putchar('*');
		k++;
		}

		//final
	ft_putchar(10);
	ft_putchar(92);
		m = 0;
		while(m < y)
		{
		ft_putchar('*'); 	
		m++;

		}

		// l = 2;
		// while(l < y)
		// {
		// ft_putchar('*');
		// l++;
		// }
	ft_putchar('/');
	
	i++;
	}
	



	return (0);
}


#include <unistd.h>

void	ft_putchar(char c);

int	rush(int x, int y)
{
	int	i, j, k, m, l;
	if (x <= 1 && y <= 1)
	{
		ft_putchar('/');
	}

	else if (x > 1 && y <= 1)
	{
		ft_putchar('/');
		i = 2;
		while (i < x)
		{
		ft_putchar('*');
		i++;
		}
		ft_putchar(92);
	}

	else if (x <=1 && y > 1)
	{
		ft_putchar('/');
		ft_putchar(10);
		j = 2;
		while (j < y)
		{
		ft_putchar('*');
		ft_putchar(10);
		j++;
		}
		ft_putchar(92);
	}

	else
	{
		ft_putchar('/');
		l = 2;
		while (l < x)
		{
		ft_putchar('*');
		l++;
		}
		ft_putchar(92);
		ft_putchar(10);

		k = 2;
		while (k < y)
		{
			ft_putchar('*');
			l = 2;
			while (l < x)
			{
				ft_putchar(32);
				l++;
			}
			ft_putchar('*');
			ft_putchar(10);
			k++;
		}

		ft_putchar(92);
		m = 2;
		while (m < x)
		{
			ft_putchar('*');
			m++;
		}
		ft_putchar('/');
	}

	return (0);
}


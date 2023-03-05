/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 19:56:56 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/03/04 19:57:01 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);
void	top_row(int width);
void	medio_top(int width);
void	start_column(int b);
void	end_row(int e);

void	whole_body(int width, int lenght)
{
	int	i;
	int	j;

	medio_top(width);
	i = 2;
	while (i < lenght)
	{
		ft_putchar('*');
		j = 2;
		while (j < width)
		{
			ft_putchar(32);
			j++;
		}
		ft_putchar('*');
		ft_putchar(10);
		i++;
	}
	end_row(width);
}

int	rush(int x, int y)
{
	if (x <= 1 && y <= 1)
	{
		ft_putchar('/');
	}
	else if (x > 1 && y <= 1)
	{
		top_row(x);
	}
	else if (x <= 1 && y > 1)
	{
		start_column(y);
	}
	else
	{
		whole_body(x, y);
	}
	return (0);
}

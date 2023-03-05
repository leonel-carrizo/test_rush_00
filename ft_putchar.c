/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lcarrizo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 19:57:10 by lcarrizo          #+#    #+#             */
/*   Updated: 2023/03/04 19:57:15 by lcarrizo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	top_row(int width)
{
	int	i;

	ft_putchar('/');
	i = 2;
	while (i < width)
	{
		ft_putchar('*');
		i++;
	}
	ft_putchar(92);
}

void	medio_top(int lenght)
{
	int	i;

	ft_putchar('/');
	i = 2;
	while (i < lenght)
	{
		ft_putchar('*');
		i++;
	}
	ft_putchar(92);
	ft_putchar(10);
}

void	start_column(int lenght)
{
	int	j;

	ft_putchar('/');
	ft_putchar(10);
	j = 2;
	while (j < lenght)
	{
		ft_putchar('*');
		ft_putchar(10);
		j++;
	}
	ft_putchar(92);
}

void	end_row(int lenght)
{
	int	m;

	ft_putchar(92);
	m = 2;
	while (m < lenght)
	{
		ft_putchar('*');
		m++;
	}
	ft_putchar('/');
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 12:15:25 by lyoung            #+#    #+#             */
/*   Updated: 2017/02/01 12:40:28 by lyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int		ft_atoi(char *str)
{
	int		i;
	int		val;

	i = 0;
	val = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		val = (val * 10) + str[i] - '0';
		i++;
	}
	return (val);
}

void	tab_mult(int *tab, int nb)
{
	int		i;
	int		mult;

	i = 0;
	mult = 1;
	while (i < 9)
	{
		tab[i] = nb * mult;
		mult++;
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	char	mult;
	int		tab[9];

	i = 0;
	mult = '1';
	if (argc < 2)
		write(1, "\n", 1);
	else
	{
		tab_mult(tab, ft_atoi(argv[1]));
		while (mult <= '9')
		{
			write(1, &mult, 1);
			ft_putstr(" x ");
			ft_putstr(argv[1]);
			ft_putstr(" = ");
			ft_putnbr(tab[i]);
			ft_putchar('\n');
			mult++;
			i++;
		}
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 09:03:46 by lyoung            #+#    #+#             */
/*   Updated: 2017/02/01 10:23:51 by lyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int		i;
	int		val;

	i = 0;
	val = 0;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		val = (val * 10) + str[i] - '0';
		i++;
	}
	return (val);
}

void	ft_putnbr(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}

int		check_prime(int nb)
{
	int		i;

	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		add_prime_sum(int nb)
{
	int		i;
	int		sum;

	i = 2;
	sum = 0;
	while (i <= nb)
	{
		if (check_prime(i))
			sum = sum + i;
		i++;
	}
	return (sum);
}

int		main(int argc, char **argv)
{
	if (argc != 2 || argv[1][0]  < '0' || argv[1][0] > '9')
	{
		write(1, "0", 1);
		write(1, "\n", 1);
	}
	else
	{
		ft_putnbr(add_prime_sum(ft_atoi(argv[1])));
		write(1, "\n", 1);
	}
	return (0);
}

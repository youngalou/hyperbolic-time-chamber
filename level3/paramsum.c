/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 14:17:28 by lyoung            #+#    #+#             */
/*   Updated: 2017/02/01 14:27:39 by lyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
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

int		main(int argc, char **argv)
{
	(void)**argv;
	if (argc < 2)
	{
		ft_putchar('0');
		ft_putchar('\n');
	}
	else
	{
		ft_putnbr(argc - 1);
		ft_putchar('\n');
	}
	return (0);
}

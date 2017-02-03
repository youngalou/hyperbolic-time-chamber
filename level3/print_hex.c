/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 12:54:15 by lyoung            #+#    #+#             */
/*   Updated: 2017/02/02 16:43:14 by lyoung           ###   ########.fr       */
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
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		val = (val * 10) + str[i] - '0';
		i++;
	}
	return (val);
}

void	print_hex(int nb)
{
	if (nb >= 16)
		print_hex(nb / 16);
	if (nb % 16 <= 9)
		ft_putchar((nb % 16) + '0');
	else
		ft_putchar((nb % 16) - 10 + 'a');
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		ft_putchar('\n');
	else
	{
		print_hex(ft_atoi(argv[1]));
		ft_putchar('\n');
	}
	return (0);
}

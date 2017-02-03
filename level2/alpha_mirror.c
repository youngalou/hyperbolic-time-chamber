/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 14:42:48 by lyoung            #+#    #+#             */
/*   Updated: 2017/01/31 15:00:58 by lyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	alpha_mirror(char *str)
{
	int		i;
	int		val;
	int		sub;
	int		new;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			val = str[i] - 64;
			sub = (val * 2) - 1;
			new = val - sub + 90;
			write(1, &new, 1);
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			val = str[i] - 96;
			sub = (val * 2) - 1;
			new = val - sub + 122;
			write(1, &new, 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		write(1, "\n", 1);
	else
		alpha_mirror(argv[1]);
	return (0);
}

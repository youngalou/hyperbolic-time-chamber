/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 11:36:18 by lyoung            #+#    #+#             */
/*   Updated: 2017/01/30 11:53:12 by lyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				if (argv[1][i] <= 'M')
					argv[1][i] = argv[1][i] + 13;
				else if (argv[1][i] >= 'N')
					argv[1][i] = argv[1][i] - 13;
			}
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				if (argv[1][i] <= 'm')
					argv[1][i] = argv[1][i] + 13;
				else if (argv[1][i] >= 'n')
					argv[1][i] = argv[1][i] - 13;
			}
			i++;
		}
		i = 0;
		while (argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i++;
		}
		write (1, "\n", 1);
	}
	return (0);
}

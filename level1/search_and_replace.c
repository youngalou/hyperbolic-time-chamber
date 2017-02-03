/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 11:14:56 by lyoung            #+#    #+#             */
/*   Updated: 2017/01/30 11:29:07 by lyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc != 4)
		write(1, "\n", 1);
	else if (argv[2][1] == '\0' && argv[3][1] == '\0')
	{
		while (argv[1][i])
		{
			if (argv[1][i] == argv[2][0])
				argv[1][i] = argv[3][0];
			i++;
		}
		i = 0;
		while (argv[1][i])
		{
			write (1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}

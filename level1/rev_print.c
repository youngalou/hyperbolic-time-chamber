/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 11:00:23 by lyoung            #+#    #+#             */
/*   Updated: 2017/01/30 11:09:00 by lyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i - 1);
}

int		main(int argc, char **argv)
{
	int		len;

	len = 0;
	if (argc != 2)
		write(1, "\n", 1);
	else
	{
		len = ft_strlen(argv[1]);
		while (len >= 0)
		{
			write(1, &argv[1][len], 1);
			len--;
		}
		write(1, "\n", 1);
	}
	return (0);
}

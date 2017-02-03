/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 08:25:16 by lyoung            #+#    #+#             */
/*   Updated: 2017/01/31 13:29:25 by lyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_double(char *s1, int i)
{
	int		x;

	x = 0;
	while(x < i)
	{
		if (s1[i] == s1[x])
			return (0);
		x++;
	}
	return (1);
}

void	ft_inter(char *s1, char *s2)
{
	int		i;
	int		j;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s1[i] != s2[j] && s2[j])
			j++;
		if (s1[i] == s2[j] && s2[j])
		{
			if (check_double(s1, i))
				write(1, &s1[i], 1);
		}
		i++;
	}
	write(1, "\n", 1);
}


int		main(int argc, char **argv)
{
	if (argc != 3)
		write(1, "\n", 1);
	else
		ft_inter(argv[1], argv[2]);
	return (0);
}

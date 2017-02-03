/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 12:24:27 by lyoung            #+#    #+#             */
/*   Updated: 2017/01/31 12:42:34 by lyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_double_s1(char *s1, int i)
{
	int		x;

	x = 0;
	while (x < i)
	{
		if (s1[x] == s1[i])
			return (0);
		x++;
	}
	return (1);
}

int		check_double_s2(char *s1, char *s2, int i, int j)
{
	int		x;

	x = 0;
	while (x < i)
	{
		if (s1[x] == s2[j])
			return (0);
		x++;
	}
	x = 0;
	while (x < j)
	{
		if (s2[x] == s2[j])
			return (0);
		x++;
	}
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	int		i;
	int		j;

	i = 0;
	while (s1[i])
	{
		if (check_double_s1(s1, i))
			write(1, &s1[i], 1);
		i++;
	}
	j = 0;
	while (s2[j])
	{
		if (check_double_s2(s1, s2, i, j))
			write(1, &s2[j], 1);
		j++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	if (argc != 3)
		write(1, "\n", 1);
	else
		ft_union(argv[1], argv[2]);
	return (0);
}

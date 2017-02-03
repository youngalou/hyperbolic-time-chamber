/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 09:59:45 by lyoung            #+#    #+#             */
/*   Updated: 2017/02/02 10:15:51 by lyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		hidenp(char *s1, char *s2)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s2[j])
	{
		if (s1[i] == s2[j])
			i++;
		j++;
	}
	if (s1[i] == '\0')
		return (1);
	return (0);
}

int		main(int argc, char **argv)
{
	if (argc != 3)
		write(1, "\n", 1);
	else
	{
		if (hidenp(argv[1], argv[2]))
			write(1, "1", 1);
		else
			write(1, "0", 1);
		write(1, "\n", 1);
	}
	return (0);
}

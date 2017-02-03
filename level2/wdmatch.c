/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 13:06:15 by lyoung            #+#    #+#             */
/*   Updated: 2017/01/31 13:21:49 by lyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_wdmatch(char *s1, char *s2)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s2[j])
	{
		if (s1[i] == s2[j])
		{
			i++;
		}
		j++;
	}
	if (s2[j] == '\0' && s1[i] != '\0')
		write(1, "\n", 1);
	else
	{
		i = 0;
		while (s1[i])
		{
			write(1, &s1[i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
}

int		main(int argc, char **argv)
{
	if (argc != 3)
		write(1, "\n", 1);
	else
		ft_wdmatch(argv[1], argv[2]);
	return (0);
}

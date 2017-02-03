/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/02 15:17:15 by lyoung            #+#    #+#             */
/*   Updated: 2017/02/02 15:33:43 by lyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	rostring(char *str)
{
	int		i;
	int		temp;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	temp = i;
	while (str[i] != ' ' && str[i] != '\t')
		i++;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
		{
			while (str[i + 1] == ' ' || str[i + 1] == '\t')
				i++;
			write(1, " ", 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
	write(1, " ", 1);
	while (str[temp] != ' ' && str[temp] != '\t')
	{
		write(1, &str[temp], 1);
		temp++;
	}
	write(1, "\n", 1);
}

int		main(int argc, char **argv)
{
	if (argc < 2)
		write(1, "\n", 1);
	else
		rostring(argv[1]);
	return (0);
}

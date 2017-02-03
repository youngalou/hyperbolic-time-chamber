/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 17:11:17 by lyoung            #+#    #+#             */
/*   Updated: 2017/02/01 17:46:07 by lyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	epur_str(char *str)
{
	int		i;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	while (str[i])
	{
		while ((str[i] == ' ' || str[i] == '\t') && (str[i + 1] == ' ' || str[i + 1] == '\t'))
			i++;
		if ((str[i] == ' ' || str[i] == '\t') && str[i + 1] != '\0')
			write(1, " ", 1);
		else if (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
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
		epur_str(argv[1]);
	return (0);
}

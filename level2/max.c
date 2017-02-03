/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 14:14:47 by lyoung            #+#    #+#             */
/*   Updated: 2017/01/31 14:40:55 by lyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		max(int *tab, unsigned int len)
{
	unsigned int	i;
	int				max;

	i = 0;
	max = tab[i];
	while (i + 1 < len)
	{
		if (max < tab[i])
			max = tab[i];
		i++;
	}
	return (max);
}

int		main(void)
{
	int		tab[5];

	printf("max = %d\n", max(tab, 5));
	return (0);
}

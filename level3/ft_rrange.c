/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/01 10:58:31 by lyoung            #+#    #+#             */
/*   Updated: 2017/02/01 14:15:04 by lyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		*ft_rrange(int start, int end)
{
	int		i;
	int		*tab;

	i = 0;
	if (end >= start)
	{
		tab = (int*)malloc(sizeof(tab) * (end - start));
		while(end >= start)
		{
			tab[i] = end;
			end--;
			i++;
		}
		return (tab);
	}
	else
	{
		tab = (int*)malloc(sizeof(tab) * (start - end));
		while(end <= start)
		{
			tab[i] = end;
			end++;
			i++;
		}
		return (tab);
	}
}

int		main(int argc, char **argv)
{
	int		start;
	int		end;
	int		i;
	int		*tab;

	i = 0;
	if (argc != 3)
		printf("Error: program must accept 2 arguments.\n");
	else
	{
		start = atoi(argv[1]);
		end = atoi(argv[2]);
		tab = ft_rrange(start, end);
		if (end >= start)
		{
			while (end >= start)
			{
				printf("%d, ", tab[i]);
				i++;
				end--;
			}
		}
		else
		{
			while (end <= start)
			{
				printf("%d, ", tab[i]);
				i++;
				end++;
			}
		}
		printf("\n");
	}
}

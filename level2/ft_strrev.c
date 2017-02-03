/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 14:12:05 by lyoung            #+#    #+#             */
/*   Updated: 2017/01/31 17:20:10 by lyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_strlen(char *str)
{
	int		i;
	
	i = 0;
	while (str[i])
		i++;
	return (i - 1);
}

char	*ft_strrev(char *str)
{
	int		i;
	int		len;
	char	temp[ft_strlen(str)];
	
	i = 0;
	len = ft_strlen(str);
	while (len >= 0)
	{
		temp[i] = str[len];
		i++;
		len--;
	}
	i = 0;
	while (str[i])
	{
		str[i] = temp[i];
		i++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	char	*rev;

	(void)argc;
	rev = ft_strrev(argv[1]);
	printf("reverse: %s\n", rev);
	return (0);
}

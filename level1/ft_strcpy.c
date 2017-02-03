/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 10:17:31 by lyoung            #+#    #+#             */
/*   Updated: 2017/01/30 10:28:26 by lyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int		i;
	
	i = 0;
	while (s1[i] != '\0')
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

int		main(int argc, char **argv)
{
	if (argc != 3)
		printf("Error: function must receive 2 lines.\n");
	else
		printf("%s\n", ft_strcpy(argv[1], argv[2]));
	return (0);
}

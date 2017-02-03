/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 13:41:45 by lyoung            #+#    #+#             */
/*   Updated: 2017/01/31 14:10:40 by lyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int		i;
	int		val;
	int		neg;

	i = 0;
	val = 0;
	neg = 1;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == ' ' || str[i] == '\r'
			str[i] == '+' || str[i] = '\\' || str[i] == '\v')
		i++;
	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		val = (val * 10) + str[i] - '0';
		i++;
	}
	return (val * neg);
}

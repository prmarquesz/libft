/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: proberto <proberto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 21:02:58 by proberto          #+#    #+#             */
/*   Updated: 2021/05/28 14:54:19 by proberto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	res = i;
	sign = 1;
	while (*(str + i) == ' ' || *(str + i) == '\f' || *(str + i) == '\n'
		|| *(str + i) == '\r' || *(str + i) == '\t' || *(str + i) == '\v')
		i++;
	if (*(str + i) == '-')
		sign = -1;
	if (*(str + i) == '-' || *(str + i) == '+')
		i++;
	while (*(str + i))
	{
		if (ft_isdigit(str[i]))
			res = res * 10 + (*(str + i) - '0');
		else
			return (res * sign);
		i++;
	}
	return (res * sign);
}

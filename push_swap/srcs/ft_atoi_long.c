/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_long.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschweit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:22:18 by bschweit          #+#    #+#             */
/*   Updated: 2022/10/18 17:22:25 by bschweit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long long	ft_atoi_long(const char *str)
{
	long long	n;
	int			s;

	n = 0;
	s = 1;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
			str++;
	if (*str == '-' && ft_isdigit(*(str + 1)))
	{
		s = -1;
		str++;
	}
	else if (*str == '+' && ft_isdigit(*str + 1))
		str++;
	while (ft_isdigit(*str))
	{
		n *= 10;
		n += *str - '0';
		str++;
	}
	return (n * s);
}

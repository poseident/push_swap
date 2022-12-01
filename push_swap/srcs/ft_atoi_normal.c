/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_normal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschweit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 17:40:51 by bschweit          #+#    #+#             */
/*   Updated: 2022/10/18 17:23:07 by bschweit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi_normal(const char *str)
{
	int	n;
	int	s;

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

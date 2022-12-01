/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschweit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 15:01:26 by bschweit          #+#    #+#             */
/*   Updated: 2022/10/18 17:23:29 by bschweit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	int_check(char **str)
{
	int			i;
	long long	num;
	int			result;

	i = 1;
	result = 0;
	while (str[i])
	{
		num = ft_atoi_long(str[i]);
		if (num < INT_MIN || num > INT_MAX)
			return (1);
		i++;
	}
	return (result);
}

int	d_check(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		{
			if (d_check2(str[i]) == 1)
				return (1);
		}
		i++;
	}
	return (0);
}

int	d_check2(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-')
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	dup_check(char **str)
{
	int			i;
	long long	tmp;
	int			index;
	int			k;

	i = 0;
	while (str[i])
	{
		k = 0;
		tmp = ft_atoi(str[i]);
		index = i;
		while (k < index)
		{
			if ((ft_atoi(str[k]) == tmp))
				return (1);
			k++;
		}
		i++;
	}
	return (0);
}

int	checker_b(char **str)
{
	int	result;

	result = 0;
	if ((dup_check(str)) || (int_check(str)) == 1)
		result = 1;
	else if ((d_check(str) == 1))
		result = 1;
	return (result);
}

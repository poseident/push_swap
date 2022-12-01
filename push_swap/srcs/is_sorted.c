/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschweit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:51:03 by bschweit          #+#    #+#             */
/*   Updated: 2022/10/23 18:33:30 by bschweit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted_check(char **str)
{
	int	i;
	int	test;
	int	test2;

	i = 0;
	while (str[i + 1])
	{
		test = ft_atoi_normal(str[i]);
		test2 = ft_atoi_normal(str[i + 1]);
		if (test2 < test)
			return (0);
		i++;
	}
	return (1);
}

void	algo_3_pt2(t_stack **a, t_data *data)
{
	if ((*a)->data > (*a)->next->next->data)
	{
		if ((*a)->data > (*a)->next->data)
		{
			if ((*a)->next->data < (*a)->next->next->data)
				ft_ra(a, data);
		}
	}
	else if ((*a)->data < (*a)->next->data)
	{
		if ((*a)->next->next->data < (*a)->next->data)
		{
			if ((*a)->data < (*a)->next->next->data)
			{
				ft_sa(*a, data);
				ft_ra(a, data);
			}
		}
	}
	else
		return ;
}

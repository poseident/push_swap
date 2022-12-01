/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_low.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschweit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:53:22 by bschweit          #+#    #+#             */
/*   Updated: 2022/10/23 17:55:28 by bschweit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_min(t_stack **a, t_data *data)
{
	int	i;
	int	min;

	i = 0;
	min = find_min(a);
	if (min <= ((data->size_a) / 2))
	{
		while (i != min)
		{
			ft_ra(a, data);
			i++;
		}
	}
	else
	{
		while (i != ((data->size_a) - min))
		{
			ft_rra(a, data);
			i++;
		}
	}
}

int	find_min(t_stack **stack)
{
	int		i;
	int		a;
	int		min;
	t_stack	*tmp;

	tmp = *stack;
	i = 0;
	min = 0;
	a = tmp->data;
	while (tmp)
	{
		if (tmp->data < a)
		{
			a = tmp->data;
			min = i;
		}
		tmp = tmp->next;
		i++;
	}
	return (min);
}

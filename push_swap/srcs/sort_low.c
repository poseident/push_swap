/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_low.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschweit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 20:56:50 by bschweit          #+#    #+#             */
/*   Updated: 2022/10/23 18:14:40 by bschweit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_low(t_stack **a, t_stack **b, t_data *data)
{
	if (data->size_a == 3)
		algo_3(a, data);
	else if (data->size_a == 4)
		algo_4(a, b, data);
	else if (data->size_a == 2)
		algo_2(a, data);
	else
		algo_5(a, b, data);
	free_stacks(a, b);
	free_data(data);
}

void	algo_2(t_stack **a, t_data *data)
{
	if ((*a)->next->data < (*a)->data)
		ft_sa(*a, data);
	else
		return ;
}

void	algo_3(t_stack **a, t_data *data)
{
	if ((*a)->data > (*a)->next->data && (*a)->data < (*a)->next->next->data)
		ft_sa(*a, data);
	else if ((*a)->data > (*a)->next->data)
	{
		if ((*a)->data > (*a)->next->next->data)
		{
			if ((*a)->next->next->data < (*a)->next->data)
			{
				ft_sa(*a, data);
				ft_rra(a, data);
			}
		}	
	}
	else if ((*a)->data < (*a)->next->data)
	{
		if ((*a)->data > (*a)->next->next->data)
		{
			if ((*a)->next->data > (*a)->next->next->data)
				ft_rra(a, data);
		}
	}
	algo_3_pt2(a, data);
}

void	algo_5(t_stack **a, t_stack **b, t_data *data)
{
	rev_min(a, data);
	ft_pb(a, b, data);
	rev_min(a, data);
	ft_pb(a, b, data);
	algo_3(a, data);
	ft_pa(a, b, data);
	ft_pa(a, b, data);
}

void	algo_4(t_stack **a, t_stack **b, t_data *data)
{
	rev_min(a, data);
	ft_pb(a, b, data);
	algo_3(a, data);
	ft_pa(a, b, data);
}

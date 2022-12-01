/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschweit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:42:15 by bschweit          #+#    #+#             */
/*   Updated: 2022/10/19 19:51:57 by bschweit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pb(t_stack **a, t_stack **b, t_data *data)
{
	t_stack	*tmp;

	if (!*a)
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = *b;
	*b = tmp;
	data->size_a = ft_size(*a);
	data->size_b = ft_size(*b);
	ft_printf("pb\n");
	data->count++;
}

void	ft_pa(t_stack **a, t_stack **b, t_data *data)
{
	t_stack	*tmp;

	if (!*b)
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = *a;
	*a = tmp;
	data->size_a = ft_size(*a);
	data->size_b = ft_size(*b);
	ft_printf("pa\n");
	data->count++;
}

t_stack	*get_stack_end(t_stack *stack)
{
	while ((stack)->next != NULL)
	{
		stack = (stack)->next;
	}
	return (stack);
}

void	ft_ra(t_stack **a, t_data *data)
{
	ft_rotate(a);
	ft_printf("ra\n");
	data->count++;
}

void	ft_rrb(t_stack **b, t_data *data)
{
	ft_reverse(b);
	ft_printf("rrb\n");
	data->count++;
}

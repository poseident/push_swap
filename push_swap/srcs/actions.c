/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschweit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:51:24 by bschweit          #+#    #+#             */
/*   Updated: 2022/10/19 19:49:07 by bschweit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rb(t_stack **b, t_data *data)
{
	ft_rotate(b);
	ft_printf("rb\n");
	data->count++;
}

void	ft_rr(t_stack **a, t_stack **b, t_data *data)
{
	ft_rotate(a);
	ft_rotate(b);
	ft_printf("ss\n");
	data->count++;
}

void	ft_rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*end;

	if (!*stack)
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	end = get_stack_end(*stack);
	tmp->next = NULL;
	end->next = tmp;
}

void	ft_reverse(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*end;
	t_stack	*second;

	second = *stack;
	if (!*stack)
		return ;
	tmp = get_stack_end(*stack);
	end = get_stack_end_reverse(*stack);
	end->next = NULL;
	tmp->next = second;
	*stack = tmp;
}

t_stack	*get_stack_end_reverse(t_stack *stack)
{
	while ((stack)->next->next != NULL)
		stack = (stack)->next;
	return (stack);
}

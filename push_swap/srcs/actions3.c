/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschweit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 19:53:15 by bschweit          #+#    #+#             */
/*   Updated: 2022/10/19 19:53:17 by bschweit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_stack *stack)
{
	int	tmp;

	tmp = stack->data;
	stack->data = stack->next->data;
	stack->next->data = tmp;
}

void	ft_sa(t_stack *a, t_data *data)
{
	ft_swap(a);
	ft_printf("sa\n");
	data->count++;
}

void	ft_sb(t_stack *b, t_data *data)
{
	ft_swap(b);
	ft_printf("sb\n");
	data->count++;
}

void	ft_ss(t_stack *a, t_stack *b, t_data *data)
{
	ft_swap(a);
	ft_swap(b);
	ft_printf("ss\n");
	data->count++;
}

void	ft_rra(t_stack **a, t_data *data)
{
	ft_reverse(a);
	ft_printf("rra\n");
	data->count++;
}

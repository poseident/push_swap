/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschweit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:32:23 by bschweit          #+#    #+#             */
/*   Updated: 2022/10/23 17:49:01 by bschweit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_stk(t_stack *s)
{
	while (s)
	{
		ft_printf("%d\n", s->data);
		s = s->next;
	}
}

void	ft_print_stks(t_stack *a, t_stack *b)
{
	printf("Stack A >\n");
	ft_print_stk(a);
	printf("Stack B >\n");
	ft_print_stk(b);
}

void	ft_push_swap(char **str)
{
	t_stack	*a;
	t_stack	*b;
	t_data	*data;

	if (is_sorted_check(str) == 1)
		return ;
	data = (t_data *) malloc(sizeof(t_data));
	data->count = 0;
	a = (t_stack *) malloc(sizeof(t_stack));
	ft_fill_stack_a(a, str);
	data->size = ft_size(a);
	data->size_a = ft_size(a);
	b = NULL;
	if (data->size_a < 6)
		sort_low(&a, &b, data);
	else
		sort_high(&a, &b, data, str);
}

int	ft_size(t_stack *stack)
{
	int		count;
	t_stack	*tmp;

	if (!stack)
		return (0);
	tmp = stack;
	count = 0;
	while (tmp->next)
	{
		count++;
		tmp = tmp->next;
	}
	count++;
	return (count);
}

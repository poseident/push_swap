/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_and_fill.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschweit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 17:21:39 by bschweit          #+#    #+#             */
/*   Updated: 2022/10/19 19:55:26 by bschweit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*create_new_node(void)
{
	t_stack	*node;

	node = (t_stack *)malloc(sizeof(t_stack));
	node->data = 0;
	node->next = NULL;
	return (node);
}

void	ft_fill_stack_b(t_stack *b, char **tab)
{
	int	i;

	i = 0;
	b->data = 0;
	while (tab[i])
	{
		i++;
		b->next = create_new_node();
		b = b->next;
	}
}

void	ft_fill_stack_a(t_stack *a, char **tab)
{
	int		i;
	t_stack	*tmp;

	tmp = a;
	i = 0;
	while (tab[i])
	{
		a->data = ft_atoi_normal(tab[i]);
		i++;
		if (tab[i])
		{
			a->next = create_new_node();
			a = a->next;
		}
	}
	a = tmp;
}

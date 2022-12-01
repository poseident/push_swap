/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_high.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschweit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 17:44:00 by bschweit          #+#    #+#             */
/*   Updated: 2022/10/23 17:45:25 by bschweit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_high(t_stack **a, t_stack **b, t_data *data, char **str)
{
	int	*tab;

	tab = stack_in_tab(str, data, a);
	ft_radix(a, b, data);
	free_stacks(a, b);
	free_data(data);
	free(tab);
}

int	*stack_in_tab(char **str, t_data *data, t_stack **a)
{
	int	i;
	int	*tab;

	i = 0;
	tab = malloc(sizeof(int) * data->size_a);
	while (i < data->size_a)
	{
		tab[i] = ft_atoi_normal(str[i]);
		i++;
	}
	ft_sort_tab(a, tab, data);
	return (tab);
}

void	ft_sort_tab(t_stack **a, int *tab, t_data *data)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (data->size - 1))
	{
		if (tab[i] > tab[i + 1])
		{
			swap = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = swap;
			i = -1;
		}
		i++;
	}
	data->max_bit = 0;
	ft_index_stack(a, tab, data);
}

void	ft_index_stack(t_stack **a, int *tab, t_data *data)
{
	int		i;
	t_stack	*tmp;

	tmp = *a;
	while ((*a))
	{
		i = 0;
		while (i < data->size)
		{
			if ((*a)->data == tab[i])
			{
				(*a)->pos = i;
				break ;
			}
			else
				i++;
		}
		(*a) = (*a)->next;
	}
	(*a) = tmp;
	while (((data->size - 1) >> data->max_bit) != 0)
		data->max_bit++;
}

void	ft_radix(t_stack **a, t_stack **b, t_data *data)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	while (i < data->max_bit)
	{
		j = 0;
		while (j < data->size)
		{
			tmp = (*a)->pos;
			if (((tmp >> i) & 1) == 1)
				ft_ra(a, data);
			else
				ft_pb(a, b, data);
			j++;
		}
		while (data->size_b != 0)
			ft_pa(a, b, data);
		i++;
	}
}

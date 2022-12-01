/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_utilities.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschweit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 15:31:42 by bschweit          #+#    #+#             */
/*   Updated: 2022/10/23 17:33:32 by bschweit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	num_len(char *str)
{
	int	i;

	i = 0;
	while ((str[i] != ' ' && str[i] != '\t') && str[i] != '\0')
		i++;
	return (i);
}

int	num_c(char *str)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t')
			i++;
		else
		{
			while ((str[i] != ' ' && str[i] != '\t') && str[i] != '\0')
				i++;
			count++;
		}
	}
	return (count);
}

int	f_strlen(char *str, int i)
{
	int	j;

	j = 0;
	while ((str[i] != ' ' && str[i] != '\t') && str[i] != '\0')
	{
		j++;
		i++;
	}
	return (j);
}

char	*ft_str(char *c, int i)
{
	int		j;
	char	*tab;

	j = 0;
	tab = (char *)malloc(sizeof(char) * (f_strlen(c, i) + 1));
	while ((c[i] != ' ' && c[i] != '\t') && c[i] != '\0')
	{
		tab[j] = c[i];
		i++;
		j++;
	}
	tab[j] = '\0';
	return (tab);
}

void	ft_rrr(t_stack **a, t_stack **b, t_data *data)
{
	ft_reverse(a);
	ft_reverse(b);
	ft_printf("rrr\n");
	data->count++;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschweit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 19:29:26 by bschweit          #+#    #+#             */
/*   Updated: 2022/10/18 17:23:51 by bschweit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	**ft_split_k(char **argv, int argc)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	tab = (char **)malloc(sizeof(char *) * argc);
	while (argv[i + 1])
	{
		j = 0;
		tab[i] = (char *)malloc(sizeof(char) * (num_len(argv[i + 1]) + 1));
		while (argv[i + 1][j])
		{
			tab[i][j] = argv[i + 1][j];
			j++;
		}
		tab[i][j] = '\0';
		i++;
	}
	tab[i] = NULL;
	return (tab);
}

char	**f_split(char *str)
{
	int		i;
	char	**tab;
	int		i2;

	i = 0;
	i2 = 0;
	tab = (char **)malloc(sizeof(char *) * (num_c(str) + 1));
	while (str[i])
	{
		if ((str[i] != ' ' && str[i] != '\t') && str[i] != '\0')
		{
			tab[i2] = ft_str(str, i);
			i2++;
			i += f_strlen(str, i);
		}
		else
			i++;
	}
	tab[i2] = 0;
	return (tab);
}

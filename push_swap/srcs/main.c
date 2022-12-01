/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschweit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:32:23 by bschweit          #+#    #+#             */
/*   Updated: 2022/10/23 17:49:47 by bschweit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	char	**tab;

	tab = NULL;
	if (argc > 2)
		tab = ft_split_k(argv, argc);
	else if (argc == 2)
		tab = f_split(argv[1]);
	else
		return (0);
	if ((int_check(tab) || d_check(tab) || dup_check(tab) == 1) || tab == NULL)
	{
		ft_putendl_fd("Error", 2);
		free_tab(tab);
		return (0);
	}
	if (tab)
		ft_push_swap(tab);
	free_tab(tab);
	return (0);
}

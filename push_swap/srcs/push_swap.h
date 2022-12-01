/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschweit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 14:39:43 by bschweit          #+#    #+#             */
/*   Updated: 2022/10/23 18:14:56 by bschweit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define INT_MAX 2147483647
# define INT_MIN -2147483648
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "../printf/ft_printf.h"
# include "../libft/libft.h"

typedef struct s_stack
{
	int				data;
	int				pos;
	struct s_stack	*next;
}					t_stack;

typedef struct s_data
{
	int	size_a;
	int	size_b;
	int	size;
	int	count;
	int	max_bit;
}		t_data;

void		algo_3_pt2(t_stack **a, t_data *data);
void		ft_radix(t_stack **a, t_stack **b, t_data *data);
void		ft_index_stack(t_stack **a, int *tab, t_data *data);
void		ft_sort_tab(t_stack **a, int *tab, t_data *data);
int			*stack_in_tab(char **str, t_data *data, t_stack **a);
void		sort_high(t_stack **a, t_stack **b, t_data *data, char **str);
int			is_sorted_check(char **str);
void		algo_4(t_stack **a, t_stack **b, t_data *data);
void		free_data(t_data *data);
void		free_stacks(t_stack **a, t_stack **b);
void		ft_print_stks(t_stack *a, t_stack *b);
void		rev_min(t_stack **a, t_data *data);
int			find_min(t_stack **stack);
void		algo_5(t_stack **a, t_stack **b, t_data *data);
void		algo_3(t_stack **a, t_data *data);
void		algo_2(t_stack **a, t_data *data);
void		sort_low(t_stack **a, t_stack **b, t_data *data);
int			ft_size(t_stack *stack);
t_stack		*get_stack_end_reverse(t_stack *stack);
t_stack		*get_stack_end(t_stack *stack);
void		ft_ss(t_stack *a, t_stack *b, t_data *data);
void		ft_sb(t_stack *b, t_data *data);
void		ft_swap(t_stack *stack);
void		ft_pb(t_stack **a, t_stack **b, t_data *data);
void		ft_sa(t_stack *stack, t_data *data);
t_stack		*create_new_node(void);
int			ft_atoi_normal(const char *str);
void		ft_push_swap(char **str);
int			int_check(char **str);
int			d_check(char **str);
int			d_check2(char *str);
int			dup_check(char **str);
char		**ft_split_k(char **argv, int argc);
int			num_len(char *str);
int			num_c(char *str);
int			f_strlen(char *str, int i);
char		*ft_str(char *c, int i);
char		**f_split(char *str);
int			checker_b(char **str);
void		free_tab(char **tab);
void		ft_fill_stack_a(t_stack *a, char **tab);
long long	ft_atoi_long(const char *str);
void		ft_fill_stack_b(t_stack *b, char **tab);
void		ft_pa(t_stack **a, t_stack **b, t_data *data);
void		ft_ra(t_stack **a, t_data *data);
void		ft_rotate(t_stack **stack);
void		ft_rb(t_stack **b, t_data *data);
void		ft_reverse(t_stack **stack);
void		ft_rrb(t_stack **b, t_data *data);
void		ft_rra(t_stack **a, t_data *data);
void		ft_rrr(t_stack **a, t_stack **b, t_data *data);

#endif

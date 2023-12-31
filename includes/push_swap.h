/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:31:27 by brpereir          #+#    #+#             */
/*   Updated: 2023/12/05 18:57:35 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack {
	int				content;
	int				index;
	struct s_stack	*next;
	struct s_stack	*previous;
}		t_stack;

int		ft_sa(t_stack *head, int flag);
int		ft_sb(t_stack *head, int flag);
void	ft_ss(t_stack *head_a, t_stack *head_b);
void	ft_pa(t_stack **stack_a, t_stack **stack_b);
void	ft_pb(t_stack **stack_a, t_stack **stack_b);
void	ft_ra(t_stack **head, int flag);
void	ft_rb(t_stack **head, int flag);
void	ft_rr(t_stack *head_a, t_stack *head_b);
int		ft_rra(t_stack **head, int flag);
int		ft_rrb(t_stack **head, int flag);
void	ft_rrr(t_stack *head_a, t_stack *head_b);
t_stack	ft_new_stack(t_stack **stack, int content);
t_stack	*ft_last_node(t_stack *head);
size_t	ft_stack_size(t_stack *head);
int		ft_is_sorted(t_stack *head);
void	ft_add_next(t_stack *stack, int content);
void	ft_stack_init(t_stack *stack, int content);
void	ft_simple_sort(t_stack **stack_a, t_stack **stack_b);
void	ft_sort_three(t_stack **stack_a);
void	ft_sort_four(t_stack **stack_a, t_stack **stack_b);
void	ft_sort_five(t_stack **stack_a, t_stack **stack_b);
void	ft_min_four(t_stack **stack_a, t_stack **stack_b, int i);
void	ft_min_five(t_stack **stack_a, t_stack **stack_b, int i);
int		ft_min_value(t_stack **stack);
int		ft_min(t_stack *lst);
void	ft_radix_sort(t_stack **stack_a, t_stack **stack_b);
void	ft_index_stack(t_stack **stack_a);
void	ft_print_list(t_stack *stack);
void	ft_free_stack(t_stack *stack);
void	ft_check_args(char **argv);
void	ft_print_list(t_stack *stack);
void	error(void);

#endif

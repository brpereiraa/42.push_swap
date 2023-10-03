/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunolopes <brunolopes@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 15:46:17 by brpereir          #+#    #+#             */
/*   Updated: 2023/10/03 15:03:45 by brunolopes       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void ft_simple_sort(t_stack *stack_a, t_stack *stack_b)
{
	int	size;
	size = ft_stack_size(stack_a);

	if(size == 2)
		ft_sa(stack_a, 1);
	else if (size == 3)
		ft_sort_three(stack_a);
	else if (size == 4)
		ft_sort_four(stack_a, stack_b);
	else if (size == 5 )
		ft_sort_five(stack_a, stack_b);
}

void ft_sort_three(t_stack *stack_a)
{
	int	a;
	int	b;
	int	c;

	a = stack_a->content;
	b = stack_a->next->content;
	c = stack_a->next->next->content;
	if (a > b && b < c && c < a)
		ft_sa(stack_a, 1);
	else if ( a > b && b > c && a > c)
	{
		ft_sa(stack_a, 1);
		ft_rra(&stack_a, 1);
	}
	else if ( a > b  && b < c && a > c)
		ft_ra(&stack_a, 1);
	else if (a < b && b > c && a < c){
		ft_sa(stack_a, 1);		
		ft_ra(&stack_a, 1);		
	}
	else
		ft_rra(&stack_a, 1);
}

void ft_sort_four(t_stack *stack_a, t_stack *stack_b)
{
	int	min;
	
	min =  ft_min_value(*stack_a);
	ft_min_four(stack_a, stack_b, min);
	ft_sort_three(stack_a);
	ft_pa(stack_a, stack_b);
}

void ft_sort_five(t_stack *stack_a, t_stack *stack_b)
{
	int	i;

	if (ft_is_sorted(stack_a))
		return ;
	i = ft_min_value(*stack_a);
	ft_min_five(stack_a, stack_b, i);
	i = ft_min_value(*stack_a);
	ft_min_four(stack_a, stack_b, i);
	ft_sort_three(stack_a);
	ft_pa(stack_a, stack_b);
	ft_pa(stack_a, stack_b);
}
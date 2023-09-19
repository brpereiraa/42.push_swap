/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 15:12:56 by brpereir          #+#    #+#             */
/*   Updated: 2023/09/19 15:46:02 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void ft_min_four(t_stack *stack_a, t_stack *stack_b, int i)
{
	if (i == 0)
		ft_pb(stack_a, stack_b);
	else if (i == 1)
	{
		ft_ra(&stack_a, 1);
		ft_pb(stack_a, stack_b);
		return ;
	}
	else if (i == 2)
	{
		ft_ra(&stack_a, 1);
		ft_ra(&stack_a, 1);
		ft_pb(stack_a, stack_b);
	}
	else if (i == 3)
	{
		ft_rra(&stack_a, 1);
		ft_pb(stack_a, stack_b);
	}
}

void ft_min_five(t_stack *stack_a, t_stack *stack_b, int i)
{
	if (i <= 2)
		ft_min_four(stack_a, stack_b, i);
	else if (i == 3)
	{
		ft_rra(stack_a, 0);
		ft_rra(stack_a, 0);
		if (ft_is_sorted(stack_a))
			return ;
		ft_pb(stack_a, stack_b);
	}
	else if (i == 4)
	{
		ft_rra(stack_a, 0);
		if (ft_check_sorted(*stack_a))
			return ;
		ft_pb(stack_a, stack_b);
	}
}
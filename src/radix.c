/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:40:52 by brunolopes        #+#    #+#             */
/*   Updated: 2023/10/18 16:06:40 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_radix_sort_b(t_stack **stack_a, t_stack **stack_b, int bits, int j)
{
	int	size;

	size = ft_stack_size(*stack_b);
	while (size-- && j <= bits && !ft_is_sorted(*stack_a))
	{
		if ((((*stack_b)->content >> j) & 1) == 0)
			ft_rb(stack_b, 1);
		else
			ft_pa(stack_a, stack_b);
	}
	if (ft_is_sorted(*stack_a))
		while (ft_stack_size(*stack_b) != 0)
			ft_pa(stack_a, stack_b);
}

void ft_radix_sort(t_stack **stack_a, t_stack **stack_b)
{
	int	j;
	int	bits;
	int	size;
	
	bits = 0;
	size = ft_stack_size(*stack_a);
	while(size > 1 && ++bits)
		size /= 2;
	j = -1;
	while (++j <= bits)
	{
		size = ft_stack_size(*stack_a);
		while(size-- && !ft_is_sorted(*stack_a))
		{
			if (!(((*stack_a)->index >> j) & 1))
			{
				ft_pb(stack_a, stack_b);
			}
			else
				ft_ra(stack_a, 1);
		}
		ft_radix_sort_b(stack_a, stack_b, bits, j+1);
	}
	while(ft_stack_size(*stack_b))
		ft_pa(stack_a, stack_b);
}

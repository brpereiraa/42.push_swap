/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:08:06 by brpereir          #+#    #+#             */
/*   Updated: 2023/11/10 17:44:00 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_add_next(t_stack *stack, int content)
{
	t_stack	*node;

	node = (t_stack *)malloc(sizeof(t_stack));
	if (!node)
		return ;
	node->content = content;
	node->next = NULL;
	while (stack->next)
		stack = stack->next;
	stack->next = node;
	node->previous = stack;
	node->index = -1;
}

void	ft_stack_init(t_stack *stack, int content)
{
	stack->content = content;
	stack->next = NULL;
	stack->previous = NULL;
	stack->index = -1;
}

int	ft_min_value(t_stack **stack)
{
	t_stack	*temp;
	int		i;
	int		min_stack;

	i = 0;
	temp = *stack;
	min_stack = ft_min(*stack);
	while (temp->content != min_stack)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}

int	ft_min(t_stack *stack)
{
	int	min;

	min = stack->content;
	while (stack)
	{
		if (stack->content < min)
			min = stack->content;
		stack = stack->next;
	}
	return (min);
}

void	ft_free_stack(t_stack *stack)
{
	t_stack	*temp;

	while (stack)
	{
		temp = stack->next;
		free (stack);
		stack = temp;
	}
}

// void	ft_print_list (t_stack *stack)
// {
// 	while (stack)
// 	{
// 		printf("Something: %i\n", stack->content);
// 		stack = stack->next;
// 	}
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:13:33 by brpereir          #+#    #+#             */
/*   Updated: 2023/11/10 15:54:10 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*ft_last_node(t_stack *head)
{
	while (head->next)
		head = head->next;
	return (head);
}

size_t	ft_stack_size(t_stack *head)
{
	size_t	i;

	i = 0;
	if (!head)
		return (0);
	while (head->next)
	{
		head = head->next;
		i++;
	}
	return (++i);
}

int	ft_is_sorted(t_stack *head)
{
	while (head && head->next)
	{
		if (head->next->content < head->content)
			return (0);
		head = head->next;
	}
	return (1);
}

static t_stack	*get_next_min(t_stack *stack)
{
	t_stack	*head;
	t_stack	*min;
	int		has_min;

	min = NULL;
	has_min = 0;
	head = stack;
	while (head)
	{
		if ((head->index == -1) && (!has_min || head->content < min->content))
		{
			min = head;
			has_min = 1;
		}
		head = head->next;
	}
	return (min);
}

void	ft_index_stack(t_stack **stack_a)
{
	t_stack	*head;
	int		index;

	index = 0;
	head = get_next_min (*stack_a);
	while (head)
	{
		head->index = index++;
		head = get_next_min (*stack_a);
	}
}

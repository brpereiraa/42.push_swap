/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:13:21 by brpereir          #+#    #+#             */
/*   Updated: 2023/11/10 16:02:18 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_ra(t_stack **head, int flag)
{
	t_stack	*tail;

	if (!(*head) || !(*head)->next)
		return ;
	tail = ft_last_node(*head);
	tail->next = *head;
	*head = (*head)->next;
	tail->next->next = NULL;
	tail->next->previous = tail;
	if (flag)
		ft_printf ("ra\n");
}

void	ft_rb(t_stack **head, int flag)
{
	t_stack	*tail;

	if (!(*head) || !(*head)->next)
		return ;
	tail = ft_last_node (*head);
	tail->next = *head;
	*head = (*head)->next;
	tail->next->next = NULL;
	if (flag)
		ft_printf ("rb\n");
}

void	ft_rr(t_stack *head_a, t_stack *head_b)
{
	ft_ra (&head_a, 0);
	ft_rb (&head_b, 1);
	ft_printf ("rr\n");
}

int	ft_rra(t_stack **head, int flag)
{
	t_stack	*tail;
	t_stack	*new_tail;

	if (ft_stack_size(*head) < 2)
		return (-1);
	tail = ft_last_node(*head);
	new_tail = tail->previous;
	new_tail->next = NULL;
	tail->next = *head;
	*head = tail;
	if (flag)
		ft_printf ("rra\n");
	return (0);
}

int	ft_rrb(t_stack **head, int flag)
{
	t_stack	*tail;
	t_stack	*new_tail;

	if ((*head) < 2)
		return (-1);
	tail = ft_last_node(*head);
	new_tail = tail->previous;
	new_tail->next = NULL;
	tail->next = *head;
	*head = tail;
	if (flag)
		ft_printf ("rrb\n");
	return (0);
}

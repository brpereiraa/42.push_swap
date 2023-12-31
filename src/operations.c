/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:13:25 by brpereir          #+#    #+#             */
/*   Updated: 2023/11/10 16:04:50 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_sa(t_stack *head, int flag)
{
	int	temp;
	int	temp_index;

	if (ft_stack_size(head) < 2)
		return (-1);
	temp = head->content;
	temp_index = head->index;
	head->content = head->next->content;
	head->index = head->next->index;
	head->next->content = temp;
	head->next->index = temp_index;
	if (flag)
		ft_printf ("sa\n");
	return (0);
}

int	ft_sb(t_stack *head, int flag)
{
	int	temp;

	if (ft_stack_size(head) < 2)
		return (-1);
	temp = head->content;
	head->content = head->next->content;
	head->next->content = temp;
	if (flag)
		ft_printf ("sb\n");
	return (0);
}

void	ft_ss(t_stack *head_a, t_stack *head_b)
{
	ft_sa (head_a, 0);
	ft_sb (head_b, 0);
	ft_printf ("ss\n");
}

void	ft_pa(t_stack **head_a, t_stack **head_b)
{
	t_stack	*temp;

	if (!*head_b)
		return ;
	temp = *head_a;
	*head_a = *head_b;
	*head_b = (*head_b)->next;
	(*head_a)->next = temp;
	ft_printf ("pa\n");
}

void	ft_pb(t_stack **head_a, t_stack **head_b)
{
	t_stack	*temp;

	if (!*head_a)
		return ;
	temp = *head_b;
	*head_b = *head_a;
	*head_a = (*head_a)->next;
	(*head_b)->next = temp;
	ft_printf ("pb\n");
}

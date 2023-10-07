/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunolopes <brunolopes@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:13:25 by brpereir          #+#    #+#             */
/*   Updated: 2023/10/04 17:00:06 by brunolopes       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int ft_sa(t_stack *head, int flag)
{
  int temp;
  
  if(ft_stack_size(head) < 2)
    return (-1);
  temp = head->content;
  head->content = head->next->content;
  head->next->content = temp;
  if(flag)
    printf("sa\n");
  return (0);
}

int ft_sb(t_stack *head, int flag)
{
  int temp;
  
  if(ft_stack_size(head) < 2)
    return (-1);
  temp = head->content;
  head->content = head->next->content;
  head->next->content = temp;
  if(flag)
    printf("sb\n");
  return (0);
}

void ft_ss(t_stack  *head_a, t_stack *head_b)
{
  ft_sa(head_a, 0);
  ft_sb(head_b, 0);
  printf("ss\n");
}

void ft_pa(t_stack **head_a, t_stack **head_b)
{
  t_stack	*temp;

	if (!*head_b)
		return ;
	temp = *head_a;
	*head_a = *head_b;
	*head_b = (*head_b)->next;
	(*head_a)->next = temp;
	printf("pa\n");
}

void ft_pb(t_stack **head_a, t_stack **head_b)
{
  t_stack	*temp;

	// printf("something: %i : %i : %i \n", (*head_a)->content, (*head_a)->next->content, (*head_a)->next->next->content);
	if (!*head_a)
		return ;
	temp = *head_b;
	*head_b = *head_a;
	*head_a = (*head_a)->next;
	(*head_b)->next = temp;
	printf("pb\n");
}

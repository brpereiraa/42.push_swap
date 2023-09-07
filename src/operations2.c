/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:13:21 by brpereir          #+#    #+#             */
/*   Updated: 2023/09/07 15:25:49 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h";

void ft_ra(t_stack head, int flag)
{
  t_stack tail;
  t_stack something;
  t_stack temp;

  tail = ft_last_node(head);
  temp = head;
  head = head->next;
  tail->next = temp;
  temp->next = NULL;
  if(flag)
    ft_printf("ra\n");
}

void ft_rb(t_stack head, int flag)
{
  t_stack tail;
  t_stack something;
  t_stack temp;

  tail = ft_last_node(head);
  temp = head;
  head = head->next;
  tail->next = temp;
  temp->next = NULL;
  if(flag)
    ft_printf("rb\n");
}

void ft_rr(t_stack head_a, t_stack head_b)
{
  ft_rb(head_a, 0);
  ft_rb(head_b, 1);
  ft_printf("rr\n")
}

void ft_rra(t_stack head, int flag)
{
  t_stack tail;
  t_stack something;

  if(ft_stack_size(head) < 2)
    return (-1);
  tail = ft_last_node(head);
  something = tail->previous;
  something->next = NULL;
  tail->next = head;
  head = tail;
  if(flag)
    ft_printf("rra\n");
}

void ft_rrb(t_stack head, int flag)
{
  t_stack tail;
  t_stack something;

  if(ft_stack_size(head) < 2)
    return (-1);
  tail = ft_last_node(head);
  something = tail->previous;
  something->next = NULL;
  tail->next = head;
  if(flag)
    ft_printf("rrb\n");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:13:21 by brpereir          #+#    #+#             */
/*   Updated: 2023/09/14 17:50:57 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void ft_ra(t_stack *head, int flag)
{
  t_stack *tail;
  t_stack *something;
  t_stack *temp;

  *tail = ft_last_node(head);
  temp = head;
  head = head->next;
  tail->next = temp;
  temp->next = NULL;
  if(flag)
    printf("ra\n");
}

void ft_rb(t_stack *head, int flag)
{
  t_stack *tail;
  t_stack *something;
  t_stack *temp;

  *tail = ft_last_node(head);
  temp = head;
  head = head->next;
  tail->next = temp;
  temp->next = NULL;
  if(flag)
    printf("rb\n");
}

void ft_rr(t_stack *head_a, t_stack *head_b)
{
  ft_ra(head_a, 0);
  ft_rb(head_b, 1);
  printf("rr\n");
}

int ft_rra(t_stack **head, int flag)
{
  t_stack *tail;
  t_stack *new_tail;

  tail = (t_stack *)malloc(sizeof(t_stack));
  new_tail = (t_stack *)malloc(sizeof(t_stack));
  if(ft_stack_size(*head) < 2)
    return (-1);
  *tail = ft_last_node(*head);
  new_tail = tail->previous;
  new_tail->next = NULL;
  tail->next = *head;
  *head = tail;
  if(flag)
    printf("rra\n");
  return (0);
}

int ft_rrb(t_stack **head, int flag)
{
  t_stack *tail;
  t_stack *new_tail;

  tail = (t_stack *)malloc(sizeof(t_stack));
  new_tail = (t_stack *)malloc(sizeof(t_stack));
  if(ft_stack_size(*head) < 2)
    return (-1);
  *tail = ft_last_node(*head);
  new_tail = tail->previous;
  new_tail->next = NULL;
  tail->next = *head;
  *head = tail;
  if(flag)
    printf("rrb\n");
  return (0);
}

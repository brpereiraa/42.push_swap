/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:13:25 by brpereir          #+#    #+#             */
/*   Updated: 2023/09/12 17:54:10 by brpereir         ###   ########.fr       */
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
  return (0);
}

void ft_ss(t_stack  *head_a, t_stack *head_b)
{
  ft_sa(head_a, 0);
  ft_sb(head_b, 0);
  printf("ss\n");
}

void ft_pa(t_stack *head_a, t_stack *head_b)
{
  t_stack *temp;

  if(!head_a)
    return ;
  temp = head_a;
  temp->next = head_b;
  head_a = head_a->next;
  head_b = temp;
}

void ft_pb(t_stack *head_a, t_stack *head_b)
{
  t_stack *temp;

  if(!head_b)
    return ;
  temp = head_b;
  temp->next = head_a;
  head_b = head_b->next;
  head_a = temp;
}

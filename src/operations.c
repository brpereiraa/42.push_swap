/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:13:25 by brpereir          #+#    #+#             */
/*   Updated: 2023/09/07 16:08:43 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int ft_sa(t_stack *head, int flag)
{
  t_stack temp;
  
  if(ft_stack_size(head) < 2)
    return (-1);
  temp = *head;
  head = head->next;
  head->next = &temp;
  if(flag)
    printf("sa\n");
  return (0);
}

int ft_sb(t_stack *head, int flag)
{
  t_stack temp;
  
  if(ft_stack_size(head) < 2)
    return (-1);
  temp = *head;
  head = head->next;
  head->next = &temp;
  if(flag)
    printf("sb\n");
  return (0);
}

void ft_ss(t_stack *head_a, t_stack *head_b)
{
  ft_sa(head_a, 0);
  ft_sb(head_b, 0);
  printf("ss\n");
}

void ft_pa(t_stack stack_a, t_stack stack_b)
{
}

void ft_pb(t_stack stack_a, t_stack stack_b)
{
  
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:13:25 by brpereir          #+#    #+#             */
/*   Updated: 2023/09/05 17:07:40 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void ft_sa(t_stack head, int flag)
{
  t_stack temp;
  
  if(ft_stack_size < 2)
    return (-1);
  temp = &head;
  head = head->next;
  head->next = temp;
  if(flag)
    ft_printf("sa\n");
}

void ft_sb(t_stack head, int flag)
{
  t_stack temp;
  
  if(ft_stack_size < 2)
    return (-1)
  temp = &head;
  head = head->next;
  head->next = temp;
  if(flag)
    ft_printf("sb\n");
}

void ft_ss(t_stack stack_a, t_stack stack_b)
{
  ft_sa(stack_a, 0);
  ft_sb(stack_b, 0);
  ft_printf("ss\n");
}

void ft_pa(t_stack stack_a, t_stack stack_b)
{
}

void ft_pb(t_stack stack_a, t_stack stack_b)
{
  
  stack_a->next = stack_b; 

}

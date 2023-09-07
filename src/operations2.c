/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:13:21 by brpereir          #+#    #+#             */
/*   Updated: 2023/09/07 14:33:53 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h";

void ft_ra(t_stack stack)
{
  t_stack tail = ft_
}

void ft_rb(t_stack stack)
{

}

void ft_rr(t_stack stack)
{
  
}

void ft_rra(t_stack head, int flag)
{
  t_stack temp;

  if(ft_stack_size < 2)
    return (-1);
  temp = &head;
  while(head->next)
    head = head->next;
  head = &temp;
  if(flag)
    ft_printf("rra\n");
}

void ft_rrb(t_stack head, int flag)
{
  t_stack temp;

  if(ft_stack_size < 2)
    return (-1);
  temp = &head;
  while(head->next)
    head = &head->next;
  head = &temp;
  if(flag)
    ft_printf("rrb\n");
}

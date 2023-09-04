/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:13:25 by brpereir          #+#    #+#             */
/*   Updated: 2023/08/08 18:13:31 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void ft_sa(t_stack stack)
{
  t_stack temp;

  temp = &stack->next;
  stack->next = &stack;
  stack = &temp;
}

void ft_sb(t_stack stack)
{
  t_stack temp;
  temp = &stack->next;
  stack->next = &stack;
  stack = &temp;
}

void ft_ss(t_stack stack_a, t_stack stack_b)
{
  ft_sa(stack_a);
  ft_sb(stack_b)
}

void ft_pa(t_stack stack)
{

}

void ft_pb(t_stack stack)
{

}

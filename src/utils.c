/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:13:33 by brpereir          #+#    #+#             */
/*   Updated: 2023/09/07 16:01:32 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack ft_new_stack(t_stack stack, int content)
{
  t_stack new_stack;
  
  stack.next = &new_stack;
  new_stack.content = content;
  return (new_stack);
}

t_stack ft_last_node(t_stack *head)
{
  while (head->next)
    head = head->next;
  return (*head);
}

size_t ft_stack_size(t_stack *head)
{
  size_t i;

  while (head->next)
  {
    head = head->next;
    i++;
  }
  return i;
}
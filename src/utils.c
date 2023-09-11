/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 18:13:33 by brpereir          #+#    #+#             */
/*   Updated: 2023/09/11 16:37:36 by brpereir         ###   ########.fr       */
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

int ft_is_sorted(t_stack *head)
{
  while(head->next)
  {
    if (head->next->content < head->content)
      return (0);
  }
  return (1);
}

  // t_stack ft_init_stack(t_stack stack, int argc, char **argv)
  // {

  // }
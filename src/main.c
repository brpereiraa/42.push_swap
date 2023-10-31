/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bruno <bruno@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 18:43:42 by brpereir          #+#    #+#             */
/*   Updated: 2023/10/31 01:27:53 by bruno            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void ft_sort_stack(t_stack **stack_a, t_stack **stack_b){
  if (ft_stack_size(*stack_a) <= 5)
    ft_simple_sort(stack_a, stack_b);
  else 
    ft_radix_sort(stack_a, stack_b);
}

int main(int argc, char **argv)
{
  t_stack *head_a;
  t_stack *head_b;

  head_a = (t_stack *)malloc(sizeof(t_stack));
  head_b = NULL;
	if (argc < 2)
    return(-1);

  ft_stack_init(head_a, atoi(argv[1]));    
  for (int i = 2; i < argc; i++) {
    int content = atoi(argv[i]);
    ft_add_next(head_a, content);
  }
  if (ft_is_sorted(head_a))
    return (0);
  ft_index_stack(&head_a);
  ft_sort_stack(&head_a, &head_b);
  ft_free_stack(head_a);
  ft_free_stack(head_b);
  return (0);
}

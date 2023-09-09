/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 18:43:42 by brpereir          #+#    #+#             */
/*   Updated: 2023/09/07 16:00:36 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  // #include <unistd.h>
#include <stdio.h>
#include "../includes/push_swap.h"

void ft_sort_stack(t_stack *stack_a, t_stack *stack_b){
  if (ft_stack_size(stack_a) <= 5)
    // ft_simple_sort();
  else 
    // ft_radix_sort();
}

int main(int argc, char **argv)
{
  int i;
  t_stack stack_a;
  t_stack stack_b;

	if (argc < 2)
    return(-1);
  i = 1;
  if(ft_is_sorted(stack_a))
    return (0);
    
  while(i < (argc))
  {
    stack_a.content = argv[i];
    printf("%s", stack.content);
    i++;
    stack = ft_add_next(stack, argv[i]);
  }
}

// int main(void)
// {
//   t_stack head;
//   t_stack next;
//   t_stack third;
//   head.content = 1;
//   head.next = &next;
//   next.content = 2; 
//   next.next = &third;
//   third.content = 3; 

//   while(head.next)
//   {
//     printf("%i", head.content);
//     head = *head.next;
//   }

//   return (0);
// }


// cc src/main.c src/operations.c src/operations2.c src/operations3.c src/utils.c includes/push_swap.h
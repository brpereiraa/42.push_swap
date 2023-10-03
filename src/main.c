/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brunolopes <brunolopes@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 18:43:42 by brpereir          #+#    #+#             */
/*   Updated: 2023/10/03 15:34:21 by brunolopes       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  // #include <unistd.h>
#include <stdio.h>
#include "../includes/push_swap.h"

// void ft_sort_stack(t_stack *stack_a, t_stack *stack_b){
  // if (ft_stack_size(stack_a) <= 5)
    // ft_simple_sort();
  // else 
    // ft_radix_sort();
// }

int main(int argc, char **argv)
{
  t_stack *head_a;
  t_stack *head_b;

  head_a = (t_stack *)malloc(sizeof(t_stack));
  head_b = (t_stack *)malloc(sizeof(t_stack));

	if (argc < 2)
    return(-1);

  ft_stack_init(head_a, atoi(argv[1]));    
  ft_stack_init(head_b, atoi(argv[1]));    
  for (int i = 2; i < argc; i++) {
    int content = atoi(argv[i]);
    ft_add_next(head_a, content);
  }
  if (ft_is_sorted(head_a))
    return (0);
  ft_simple_sort(head_a, head_b);
  
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


// cc src/main.c src/operations.c src/operations2.c src/operations3.c src/utils.c src/utils2.c includes/push_swap.h;
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 18:43:42 by brpereir          #+#    #+#             */
/*   Updated: 2023/09/11 18:17:31 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

  // #include <unistd.h>
#include <stdio.h>
#include "../includes/push_swap.h"

void ft_sort_stack(t_stack *stack_a, t_stack *stack_b){
  // if (ft_stack_size(stack_a) <= 5)
    // ft_simple_sort();
  // else 
    // ft_radix_sort();
}

int main(int argc, char **argv)
{
  t_stack *stack_a;
  t_stack *stack_b;

  stack_a = (t_stack *)malloc(sizeof(t_stack));
  stack_b = (t_stack *)malloc(sizeof(t_stack));

	if (argc < 2)
    return(-1);
  // if(ft_is_sorted(stack_a))
    // return (0);
    
  for (int i = 1; i < argc; i++) {
    int content = atoi(argv[i]);
    ft_add_next(stack_a, content);
  }

  printf("Contents of the stack before:\n");
    t_stack *current = stack_a;
    while (current) {
      printf("%i\n", current->content);
      current = current->next;
    }

  ft_sa(stack_a, 0);

  printf("Contents of the stack after:\n");
    t_stack *temp = stack_a;
    while (temp) {
      printf("%i\n", temp->content);
      temp = temp->next;
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


// cc src/main.c src/operations.c src/operations2.c src/operations3.c src/utils.c src/utils2.c includes/push_swap.h
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

#include <unistd.h>
#include <stdio.h>
#include "../includes/push_swap.h"

// int main(int argc, char **argv)
// {
//   int i;
//   t_stack stack;

// 	if (argc == 1)
// 	{
// 		printf("Wrong number of arguments");
//     return(0);
// 	}
//   i = 1;
//   while(i < (argc))
//   {
//     stack.content = argv[i];
//     printf("%s", stack.content);
//     i++;
//     stack = ft_add_next(stack, argv[i]);
//   }
// }

int main(void)
{
  t_stack head;
  t_stack next;
  t_stack third;
  head.content = 1;
  head.next = &next;
  next.content = 2; 
  next.next = &third;
  third.content = 3; 

  while(head.next)
  {
    printf("%i", head.content);
    head = *head.next;
  }

  return (0);
}


// cc src/main.c src/operations.c src/operations2.c src/operations3.c src/utils.c includes/push_swap.h
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 18:43:42 by brpereir          #+#    #+#             */
/*   Updated: 2023/08/08 18:38:28 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "../includes/push_swap.h"

int main(int argc, char **argv)
{
  int i;
  t_stack stack;

	if (argc == 1)
	{
		printf("Wrong number of arguments");
    return(0);
	}
  i = 1;
  while(i < (argc))
  {
    stack.content = argv[i];
    printf("%s", stack.content);
    i++;
    stack = ft_add_next(stack, argv[i]);
  }
}

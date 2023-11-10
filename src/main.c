/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 18:43:42 by brpereir          #+#    #+#             */
/*   Updated: 2023/11/10 15:27:16 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	ft_sort_stack(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_stack_size (*stack_a) <= 5)
		ft_simple_sort (stack_a, stack_b);
	else 
		ft_radix_sort (stack_a, stack_b);
}

int	main(int argc, char **argv)
{
	t_stack	*head_a;
	t_stack	*head_b;
	int		i;

	if (argc < 2)
		exit(EXIT_FAILURE);
	head_a = (t_stack *)malloc(sizeof(t_stack));
	head_b = NULL;
	i = 2;
	ft_check_args (argv, head_a);
	ft_stack_init (head_a, ft_atoi(argv[1]));
	while (i < argc)
		ft_add_next (head_a, ft_atoi(argv[i++]));
	if (ft_is_sorted (head_a))
	{
		ft_free_stack (head_a);
		exit (EXIT_FAILURE);
	}
	ft_index_stack(&head_a);
	ft_sort_stack(&head_a, &head_b);
	ft_free_stack(head_a);
	ft_free_stack(head_b);
	return (0);
}

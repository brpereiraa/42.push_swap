/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brpereir <brpereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 22:27:53 by marvin            #+#    #+#             */
/*   Updated: 2023/12/05 19:06:53 by brpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static int	ft_isnum(char **num)
{
	int	i;
	int	j;

	j = 0;
	while (num[++j])
	{
		i = 0;
		if (num[j][0] == '-')
			i++;
		if (!num[j][i])
			return (0);
		while (num[j][i])
			if (!ft_isdigit(num[j][i++]))
				return (0);
		ft_atoi(num[j]);
	}
	return (1);
}

static int	ft_dup_check(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
			if (ft_strcmp(argv[i], argv[j++]) == 0)
				return (0);
		i++;
	}
	return (1);
}

void	ft_check_args(char **argv)
{
	if (!ft_isnum (argv) || !ft_dup_check (argv))
		error ();
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 22:27:53 by marvin            #+#    #+#             */
/*   Updated: 2023/10/29 22:27:53 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isnum(char *num)
{
	int	i;

	i = 0;
	if (num[0] == '-')
		i++;
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (0);
		i++;
	}
	return (1);
}

int ft_dup_check(char **argv)
{
    int	i;
    int	j;

    i = 1;
    while (argv[i])
    {
        j = i + 1;
        while (argv[j])
        {
            if (ft_strcmp(argv[i], argv[j]) == 0)
                return (0);
            j++;
        }
        i++;
    }
    return (1);
}


int ft_check_args(char **argv, )
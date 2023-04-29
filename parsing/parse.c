/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 13:59:11 by smlamali          #+#    #+#             */
/*   Updated: 2023/04/29 18:04:12 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_occurence(char **arg)
{
	return (0);
}

void	*ft_add(char *arg)
{
	return ;
}

int	*ft_parse(char **arg, t_data *pile)
{
	 
}

int	ft_check(char **arg)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (arg[i])
	{
		while (arg[i][j])
		{
			if (arg[i][j] == '-' && arg[i][j + 1] == 0)
				return (1);
			if (arg[i][j] != '-' && (arg[i][j] < '0' || arg[i][j] > '9'))
				return (1);
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}

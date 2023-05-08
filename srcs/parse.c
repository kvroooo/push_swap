/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuro <kuro@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 18:36:25 by kuro              #+#    #+#             */
/*   Updated: 2023/05/08 22:16:10 by kuro             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_data *ft_parse(char **arg)
{
	int i;
	int nbr;
	t_data *nvx;

	i = 1;
	nvx = l_new_data();
	if (!nvx)
		return (NULL);
	nbr = ft_atoi(arg[i++]);
	nvx->nbr = nbr;
	while (arg[i])
	{
		nbr = ft_atoi(arg[i]);
		nvx->next = l_add_data(nvx, nbr);
		i++;
	}
	return (nvx);
}

int ft_check(char **arg, t_pile *pile)
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (arg[i])
	{
		while (arg[i][j])
		{
			if (arg[i][j] == '-' && arg[i][j + 1] == 0)
				return (0);
			if (arg[i][j] != '-' && (arg[i][j] < 0 || arg[i][j] > '9'))
				return (0);
			j++;
		}
		i++;
		j = 0;
		pile->len += 1;
	}
	return (1);
}

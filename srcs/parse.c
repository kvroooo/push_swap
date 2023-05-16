/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 18:36:25 by kuro              #+#    #+#             */
/*   Updated: 2023/05/16 13:54:47 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//parse argv 
//transform each element of argv into int
//assign it to pile->a
void	ft_parse(char **arg, t_pile *pile)
{
	int		i;
	int		j;
	int		nbr;

	i = 1;
	j = 0;
	while (arg[i])
	{
		nbr = ft_atoi(arg[i]);
		if (ft_occ(nbr, pile->a))
			return ;
		pile->a = add_at(pile->a, nbr, j);
		if (!pile->a)
		{
			free_data(pile->a);
			return ;
		}
		i++;
		j++;
	}
	return ;
}

int	ft_occ(int nb, t_data *data)
{
	if (!data)
		return (0);
	if (nb == data->nbr)
	{
		ft_error("doublons");
		return (1);
	}
	return (ft_occ(nb, data->next));
}

int	ft_check(char **arg, t_pile *pile)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (!arg[i][j])
		return (0);
	while (arg[i])
	{
		while (arg[i][j])
		{
			if ((arg[i][j] == '-' && arg[i][j + 1] == 0) || (arg[i][j] == ' '))
				return (0);
			if (arg[i][j] == '+' && arg[i][j + 1] == 0)
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

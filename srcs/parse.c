/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 18:36:25 by kuro              #+#    #+#             */
/*   Updated: 2023/05/09 17:46:52 by smlamali         ###   ########.fr       */
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

int	ft_occ(t_pile *pile)
{
	int		i;
	int		j;
	int		nb;
	t_data	*tmp;

	i = 0;
	j = 0;
	tmp = pile->a;
	while (tmp)
	{
		nb = tmp->nbr;
		while (tmp)
		{
			if (i == j)
				tmp->next;
			j++;
			if (nb == tmp->nbr)
				return (1);
			j++;
			tmp = tmp->next;
		}
		j = 0;
		i++;
		tmp = pile->a->next;
	}
	return (0);
}

int	ft_check(char **arg, t_pile *pile)
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

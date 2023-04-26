/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 12:24:57 by smlamali          #+#    #+#             */
/*   Updated: 2023/04/26 18:05:29 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_free(char **str)
{
	int	i;

	i = 0;
	if (!str)
		return ;
	while (str[i])
		free(str[i++]);
	free(str);
}

int	ft_add(char **tmp, t_pile *pile)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	pile->len = 0;
	while (tmp[i++])
		pile->len += 1;
	printf("len : %d\n", pile->len);
	pile->a = malloc(sizeof(int *) * pile->len);
	i = 0;
	while (i < pile->len)
	{
		if (verif_atoi(tmp[j]) != 1)
			j = ft_atoi(tmp[j]);
		else
		{
			printf("Error : can't convert to int my :<\n");
			return (1);
		}
		pile->a[i++] = j;
		j = i;
	}
	return (0);
}

//verifie que chaque nombre n'apparait qu'une fois dans la liste
int	ft_occur(t_pile *pile)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	tmp = 0;
	while (i < pile->len - 1)
	{
		tmp = pile->a[i];
		while (j < pile->len)
		{
			if (j == i)
				j++;
			printf("tmp : [%d] <=> pile [%d]\n", tmp, pile->a[j]);
			if (tmp == pile->a[j])
				return (1);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

//On separe les nombres dans un char ** temporaire OK
//Check si chaque partie contient uniquement un nombre entier OK 
int	ft_check(char *arg, t_pile *pile)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if (arg[i] != '-' && (arg[i] < '0' || arg[i] > '9'))
			return (1);
		i++;
	}
	return (0);
}

// while (i < pile->len)		
// 		printf("[%d]\n", pile->a[i++]);

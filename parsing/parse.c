/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuro <kuro@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 13:59:11 by smlamali          #+#    #+#             */
/*   Updated: 2023/05/02 17:53:12 by kuro             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_occurence(t_data *data)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 0;
	if (!data->a)
		return (1);
	while (i < data->len)
	{
		tmp = data->a[i];
		while (j < data->len)
		{
			if (j == i)
				j += 1;
			else if (data->a[j] && tmp == data->a[j])
				return (1);
			else
				j++;
		}
		i++;
		j = 0;
	}
	return (0);
}

void	ft_parse(char **arg, t_data *data)
{
	int	i;
	int	j;
	int	nbr;

	i = 1;
	j = 0;
	data->a = malloc(sizeof(int *) * data->len);
	if (!data->a)
		return ;
	while (arg[i])
	{
		nbr = ft_atoi(arg[i]);
		data->a[j] = nbr;
		i++;
		j++;
	}
	return ;
}

int	ft_check(char **arg, t_data *data)
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
		data->len += 1;
	}
	printf("len : %d\n\n", data->len);
	ft_parse(arg, data);
	if (ft_occurence(data) != 0)
		return (1);
	return (0);
}

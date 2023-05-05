/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tri.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 20:46:40 by kuro              #+#    #+#             */
/*   Updated: 2023/05/05 15:37:21 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void	sort_three(t_data *data)
// {
// 	int	i;

// 	i = 0;
// 	printf("\n------------ TRI -----------------\n");
// 	if ((data->a[0] > data->a[1]) && (data->a[0] < data->a[2]))
// 		ft_sa(data);
// 	else if (data->a[1] < data->a[2] && data->a[0] > data->a[2])
// 		ft_ra(data);
// 	else if (data->a[2] < data->a[1] && data->a[1] < data->a[0])
// 	{
// 		ft_sa(data);
// 		ft_rra(data);
// 	}
// 	else if (data->a[0] < data->a[2] && data->a[1] > data->a[2])
// 	{
// 		ft_sa(data);
// 		ft_ra(data);
// 	}
// 	else if (data->a[0] < data->a[1] && data->a[1] > data->a[2])
// 		ft_rra(data);
// 	while (i < data->len)
// 	{
// 		printf("[%d] ", data->a[i++]);
// 	}
// }

//V2 ^^
void	smoll_sort(t_data *data)
{
	int	i;

	i = 0;
	printf("\n\n------ smoll tri ------------\n\n");
	while (!is_sorted(data))
	{
		if (data->a[0] > data->a[1])
			ft_sa(data);
		else
			ft_rra(data);
	}
	while (i < data->len)
		printf("[%d]", data->a[i++]);
	printf("\n");
}

void	five_sort(t_data *data)
{
	return ;
}

int	is_sorted(t_data *data)
{
	int	i;

	i = 0;
	while (i < data->len - 1)
	{
		if (data->a[i] > data->a[i + 1])
			return (0);
		i++;
	}
	return (1);
}

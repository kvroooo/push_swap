/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:49:05 by smlamali          #+#    #+#             */
/*   Updated: 2023/05/15 16:41:20 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// return 1 if the list of number given is already sorted
int	is_sorted(t_data *data)
{
	t_data	*tmp;

	tmp = data;
	while (tmp && tmp->next)
	{
		if (tmp->nbr < tmp->next->nbr)
			tmp = tmp->next;
		else
			return (0);
	}
	return (1);
}

// void	smoll_sort(t_data *data)
// {
// 	if (is_sorted(data))
// }
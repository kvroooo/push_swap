/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 16:42:02 by smlamali          #+#    #+#             */
/*   Updated: 2023/05/24 17:08:27 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//swap pile_a[0] with pile_a[1]
void	ft_sa(t_data *data)
{
	int	tmp;

	if (data->next == NULL)
		return ;
	tmp = data->nbr;
	data->nbr = data->next->nbr;
	data->next->nbr = tmp;
	set_position(data);
	ft_printf("sa\n");
	return ;
}

//Move everything down
//the last come first
//Gerer si un element dans la liste
void	ft_rra(t_data **data)
{
	t_data	*prelast;
	t_data	*tmp;

	tmp = *data;
	while (tmp->next != NULL)
	{
		prelast = tmp;
		tmp = tmp->next;
	}
	prelast->next = NULL;
	tmp->next = *data;
	*data = tmp;
	set_position(*data);
	ft_printf("rra\n");
}

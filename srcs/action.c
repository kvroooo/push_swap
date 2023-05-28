/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 16:42:02 by smlamali          #+#    #+#             */
/*   Updated: 2023/05/28 15:52:32 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//swap pile_a[0] with pile_a[1]
void	ft_sa(t_data **data)
{
	t_data	*list;
	t_data	*tmp;

	list = *data;
	tmp = list->next;
	list->next = tmp->next;
	tmp->next = list;
	*data = tmp;
	ft_printf("sa\n");
	return ;
}

//Move everything down
//the last come firstmake
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

void	ft_pb(t_pile *pile)
{
	t_data	*tmp;
	t_data	*elmt;

	if (!(pile->a))
		return ;
	if (!pile->b)
	{
		pile->b = pile->a;
		pile->b->next = NULL;
		return ;
	}
	elmt = pile->a;
	tmp = lst_last(pile->b);
	elmt->next = NULL;
	pile->b = tmp;
	return ;
}

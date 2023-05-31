/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 16:42:02 by smlamali          #+#    #+#             */
/*   Updated: 2023/05/30 17:30:38 by smlamali         ###   ########.fr       */
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
	set_position(*data);
	ft_printf("sa\n");
	return ;
}

//Move everything up;
// first come last ^^
//Gerer si un elmt
void	ft_ra(t_data **data)
{
	t_data	*lst;
	t_data	*tmp;

	tmp = *data;
	lst = *data;
	lst = lst->next;
	tmp->next = NULL;
	add_back(&lst, tmp);
	*data = lst;
	set_position(*data);
	ft_printf("ra\n");
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
	t_data	*elmt;
	t_data	*tmp;

	tmp = pile->a;
	elmt = pile->b;
	if (!(pile->a))
		return ;
	if (!pile->b)
	{
		elmt = tmp;
		pile->a = pile->a->next;
		elmt->next = NULL;
		pile->b = elmt;
		set_len(pile);
		ft_printf("pb\n");
		return ;
	}
	elmt = pile->a;
	pile->a = pile->a->next;
	elmt->next = pile->b;
	pile->b = elmt;
	pile->len_a -= 1;
	pile->len_b += 1;
	ft_printf("pb\n");
	return ;
}

void	ft_pa(t_pile *pile)
{
	t_data	*elmt;
	t_data	*tmp;

	tmp = pile->b;
	elmt = pile->a;
	if (!(pile->b))
		return ;
	if (!pile->a)
	{
		elmt = tmp;
		pile->b = pile->b->next;
		elmt->next = NULL;
		pile->a = elmt;
		ft_printf("pa\n");
		return ;
	}
	elmt = pile->b;
	pile->b = pile->b->next;
	elmt->next = pile->a;
	pile->a = elmt;
	ft_printf("pa\n");
	return ;
}

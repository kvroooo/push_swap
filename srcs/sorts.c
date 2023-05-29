/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:49:05 by smlamali          #+#    #+#             */
/*   Updated: 2023/05/29 15:19:31 by smlamali         ###   ########.fr       */
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

void	smoll_sort(t_pile *pile)
{
	if (is_sorted(pile->a))
		ft_printf("sorted !\n");
	while (!is_sorted(pile->a))
	{
		if (pile->a->nbr > pile->a->next->nbr)
			ft_sa(&pile->a);
		else
			ft_rra(&pile->a);
	}
	return ;
}

void	sort_five(t_pile *pile)
{
	t_data	*list;

	list = pile->a;
	while (list->index != 1)
		list = list->next;
	//deplacer elemt a index=1 en position 0;
	if (!is_sorted(pile->a))
		ft_pb(pile);
	else
		return ;
	while (!is_sorted(list))
		smoll_sort(pile);
	ft_pa(pile);
	return ;
}

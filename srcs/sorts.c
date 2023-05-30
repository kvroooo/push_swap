/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:49:05 by smlamali          #+#    #+#             */
/*   Updated: 2023/05/30 14:58:59 by smlamali         ###   ########.fr       */
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

//put the smaller element at the top of the pile
void	up_smoll(t_pile *pile)
{
	t_data	*tmp;

	tmp = pile->a;
	while (tmp && tmp->index != 1)
		tmp = tmp->next;
	while (pile->a->index != 1)
	{
		if (tmp->pos >= (pile->len / 2) + 1)
			ft_rra(&pile->a);
		else
			ft_ra(&pile->a);
	}
	return ;
}

void	sort_five(t_pile *pile)
{
	if (is_sorted(pile->a))
	{
		ft_printf("sorted !\n");
		return ;
	}
	if (is_sorted(pile->a->next))
		ft_sa(&pile->a);
	up_smoll(pile);
	if (!is_sorted(pile->a))
		ft_pb(pile);
	smoll_sort(pile);
	ft_pa(pile);
	return ;
}

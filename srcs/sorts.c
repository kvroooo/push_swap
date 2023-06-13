/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 15:49:05 by smlamali          #+#    #+#             */
/*   Updated: 2023/06/13 15:14:58 by smlamali         ###   ########.fr       */
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
		return ;
	while (!is_sorted(pile->a))
	{
		if (pile->a->nbr > pile->a->next->nbr)
			ft_sa(&pile->a);
		else
			ft_rra(&pile->a);
	}
	return ;
}

//sort 4 and 5
void	sort_five(t_pile *pile)
{
	if (is_sorted(pile->a))
		return ;
	if (is_sorted(pile->a->next))
		ft_sa(&pile->a);
	while (pile->len_a > 3)
	{
		up_smoll(&pile->a);
		if (!is_sorted(pile->a))
			ft_pb(pile);
	}
	smoll_sort(pile);
	ft_pa(pile);
	ft_pa(pile);
	return ;
}

void	sort_ten(t_pile *pile)
{
	int		i;

	i = 1;
	while (i <= 5)
	{
		up_smoll(&pile->a);
		if (!is_sorted(pile->a))
			ft_pb(pile);
		i++;
	}
	sort_five(pile);
	while (pile->b)
		ft_pa(pile);
	return ;
}

// void	up_smoll(t_pile	*pile, int index)
// {
// 	int		len;
// 	t_data	*tmp;

// 	tmp = pile;

// 	if (is_sorted(pile->a))
// 		return ;
// 	while (tmp && tmp->index != index)
// 		tmp = tmp->next;
// 	while (pile->a->index != index)
// 	{
// 		if (tmp->pos >= (pile->len_a / 2) + 1)
// 			ft_rra(&pile->a);
// 		else
// 			ft_ra(&pile->a);
// 	}
// 	return ;
// }
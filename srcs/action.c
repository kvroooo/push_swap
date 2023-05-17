/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 16:42:02 by smlamali          #+#    #+#             */
/*   Updated: 2023/05/17 17:52:40 by smlamali         ###   ########.fr       */
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
	ft_printf("sa\n");
	return ;
}

//Move everything down
//the last come first
//Gerer si un element dans la liste
void	ft_rra(t_pile *pile)
{
	int		i;
	t_data	*tmp;

	i = 0;
	tmp = pile->a;
	while (tmp && tmp->next)
		tmp = tmp->next;
	printf("prev %p\n", tmp->prev);
	tmp->prev = NULL;
	tmp->next = pile->a;
	while (i++ < pile->len - 1)
		tmp = tmp->next;
	tmp->next = NULL;
}

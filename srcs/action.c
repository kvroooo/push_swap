/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 16:42:02 by smlamali          #+#    #+#             */
/*   Updated: 2023/05/16 17:42:26 by smlamali         ###   ########.fr       */
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
void	ft_rra(t_pile *pile)
{
	int		i;
	int		nb;
	t_data	*tmp;

	if (!pile)
		return ;
	tmp = pile;
	i = pile->len;
	while (i > 0)
	{
		
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   action.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 16:42:02 by smlamali          #+#    #+#             */
/*   Updated: 2023/05/15 17:20:08 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//swap pile_a[0] with pile_a[1]
void	ft_sa(t_data *data)
{
	int	tmp;

	tmp = data->nbr;
	data->nbr = data->next->nbr;
	data->next->nbr = tmp;
	ft_printf("sa\n");
	return ;
}

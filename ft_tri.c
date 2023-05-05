/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tri.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuro <kuro@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 20:46:40 by kuro              #+#    #+#             */
/*   Updated: 2023/05/04 21:02:02 by kuro             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void    tri_three(t_data *data)
{    
    int i;
    
    i = 0;
	printf("\n------------ TRI -----------------\n");
    if ((data->a[0] > data->a[1]) && (data->a[0] < data->a[2]))
		ft_sa(data);
	if (data->a[1] < data->a[2] && data->a[0] > data->a[2])
		ft_ra(data);
	if (data->a[0] > data->a[2] && data->a[1] > data->a[2])
	{
		ft_sa(data);
		ft_rra(data);
	}
	if (data->a[0] < data->a[2] && data->a[1] > data->a[2])
	{
		ft_sa(data);
		ft_ra(data);
	}
	if (data->a[0] < data->a[1] && data->a[1] > data->a[2])
		ft_rra(data);
	while (i < data->len)
	{
		printf("[%d] ", data->a[i++]);
	}
}

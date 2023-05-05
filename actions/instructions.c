/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuro <kuro@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 19:10:43 by kuro              #+#    #+#             */
/*   Updated: 2023/05/04 20:48:46 by kuro             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//swipe [0] with [1]
void	ft_sa(t_data *data)
{
	int	tmp;

	if (!data->a)
		return ;
	tmp = data->a[0];
	data->a[0] = data->a[1];
	data->a[1] = tmp;
	printf("sa\n");
	return ;
}

//Move everything up
//first come last
void	ft_ra(t_data *data)
{
	int	i;
	int	tmp;
	
	i = 0;
	tmp = data->a[0];
	while (i < data->len - 1)
	{
		data->a[i] = data->a[i + 1];
		i++;
	}	
	data->a[data->len - 1] = tmp;
	printf("ra\n");
	return ;
}

//Move down
//last come first
void	ft_rra(t_data *data)
{
	int	i;
	int	tmp;
	
	i = data->len - 1;
	tmp = data->a[i];
	while (i > 0)
	{
		data->a[i] = data->a[i - 1];
		i--;
	}
	data->a[0] = tmp;
	printf("rra\n");
	return ;
}
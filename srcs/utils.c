/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 13:17:10 by smlamali          #+#    #+#             */
/*   Updated: 2023/05/15 17:22:38 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_error(char *str)
{
	write(1, "Error : ", 9);
	write(1, str, ft_strlen(str));
	write(1, "\n", 1);
}

void	print_list(t_data *data)
{
	while (data)
	{
		ft_printf("[%d]->", data->nbr);
		data = data->next;
	}
	ft_printf("%p", data);
	ft_printf("\n");
}

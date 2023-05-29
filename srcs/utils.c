/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 13:17:10 by smlamali          #+#    #+#             */
/*   Updated: 2023/05/29 14:32:28 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	set_position(t_data *data)
{
	int	i;

	i = 0;
	while (data)
	{
		data->pos = 0 + i;
		i++;
		data = data->next;
	}
}

void	set_index(t_data *data)
{
	int		i;
	t_data	*tmp;
	t_data	*list;

	i = 1;
	tmp = data;
	list = data->next;
	while (tmp)
	{
		while (list)
		{
			if (tmp->nbr > list->nbr)
				tmp->index += i;
			list = list->next;
		}
		list = data;
		tmp = tmp->next;
	}
	return ;
}

void	mr_propre(t_pile *pile)
{
	free_data(pile->a);
	free_data(pile->b);
	free(pile);
}

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
		ft_printf("[%d,%d]->", data->index, data->nbr);
		data = data->next;
	}
	ft_printf("%p", data);
	ft_printf("\n");
}

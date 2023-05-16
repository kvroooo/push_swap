/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:33:48 by smlamali          #+#    #+#             */
/*   Updated: 2023/05/16 17:23:30 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_data	*free_at(t_data *data, int pos)
{
	int		i;
	t_data	*prev;
	t_data	*current;

	i = 0;
	prev = data;
	current = data;
	if (pos == 0)
	{
		data = data->next;
		free(current);
		return (data);
	}
	while (i < pos)
	{
		prev = current;
		current = current->next;
		i++;
	}
	prev->next = current->next;
	free(current);
	return (NULL);
}

t_data	*free_data(t_data *data)
{
	t_data	*tmp;

	tmp = NULL;
	while (data)
	{
		tmp = data->next;
		free(data);
		data = tmp;
	}
	return (data);
}

t_data	*get_pos(t_data *data, int pos)
{
	int		i;
	t_data	*tmp;

	i = 0;
	if (!data)
		return (NULL);
	tmp = data;
	while (tmp && i < pos)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}

int	get_val_at(t_data *data, int pos)
{
	int		i;
	t_data	*tmp;

	i = 0;
	tmp = data;
	while (tmp && i < pos)
	{
		tmp = tmp->next;
		i++;
	}
	return (tmp->nbr);
}

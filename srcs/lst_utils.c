/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 15:33:48 by smlamali          #+#    #+#             */
/*   Updated: 2023/05/24 16:48:10 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// t_data	*lst_last(t_data *data)
// {
// 	if (!data)
// 		return (NULL);
// 	if (!(data->next))
// 		return (data);
// 	return (ft_lstlast(data)->next);
// }

// void	add_back(t_data **data, t_data *new)
// {
// 	if (!(*data))
// 		*data = new;
// 	else
// 		ft_lstlast(*data)->next = new;
// }

//On se pose sur l'avant dernier element de la liste
//On save l'element suivant pour le free a la fin
//Pointe avant dernier element vers NULL !!1! 
t_data	*free_last(t_data *data)
{
	t_data	*tmp;
	t_data	*last;

	tmp = data;
	while (tmp && tmp->next->next)
		tmp = tmp->next;
	last = tmp->next;
	tmp->next = NULL;
	free(last);
	return (data);
}

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
	if (!current)
		return (data);
	prev->next = current->next;
	free(current);
	return (data);
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

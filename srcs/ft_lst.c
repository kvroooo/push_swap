/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 17:38:10 by smlamali          #+#    #+#             */
/*   Updated: 2023/05/09 17:32:53 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//create cell
// and insert nb
t_data	*create_cell(int nbr)
{
	t_data	*tmp;

	tmp = malloc(sizeof(t_data));
	if (!tmp)
	{
		free(tmp);
		return (NULL);
	}
	tmp->nbr = nbr;
	tmp->next = NULL;
	return (tmp);
}

//add at position, data
t_data	*add_at(t_data *data, int nb, int pos)
{
	int		i;
	t_data	*prev;
	t_data	*current;
	t_data	*cell;

	i = 0;
	prev = data;
	current = data;
	cell = create_cell(nb);
	if (!cell)
		return (NULL);
	if (pos == 0)
	{
		cell->next = data;
		return (cell);
	}
	while (i < pos)
	{
		prev = current;
		current = current->next;
		i++;
	}
	prev->next = cell;
	cell->next = current;
	return (data);
}

void	print_list(t_data *data)
{
	while (data)
	{
		printf("[%d] ", data->nbr);
		data = data->next;
	}
	printf("\n");
}

//Create a new pile struct
//and initialise it to 0   (fct used once in main.c)
t_pile	*l_new_pil(void)
{
	t_pile	*new;

	new = malloc(sizeof(t_pile));
	if (!new)
	{
		free(new);
		return (NULL);
	}
	new->len = 0;
	new->len_a = 0;
	new->len_b = 0;
	new->a = NULL;
	new->b = NULL;
	return (new);
}

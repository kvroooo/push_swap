/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 17:38:10 by smlamali          #+#    #+#             */
/*   Updated: 2023/05/30 13:37:33 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//create cell
// and insert nb

void	add_back(t_data **data, t_data *elmt)
{
	if (!(*data))
		*data = elmt;
	else
		lstlast(*data)->next = elmt;
	return ;
}

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
	tmp->pos = 0;
	tmp->index = 1;
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

t_data	*lstlast(t_data *pile)
{
	if (!pile)
		return (NULL);
	if (!(pile->next))
		return (pile);
	return (lstlast(pile->next));
}

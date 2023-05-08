/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 17:38:10 by smlamali          #+#    #+#             */
/*   Updated: 2023/05/08 17:38:26 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

// create a new data struct
// and initialise everything to null
t_data	*l_new_data(void)
{
	t_data	*new;

	new = malloc(sizeof(t_data) * 1);
	if (!new)
	{
		free(new);
		return (0);
	}
	new->nbr = 0;
	new->pos = 0;
	new->index = 0;
	new->prev = NULL;
	new->next = NULL;
	return (new);
}

//create a new data struct initialised to 0
//insert the nbr and give it to te next pointer of *data
t_data	*l_add_data(t_data *data, int nb)
{
	t_data	*new;

	new = l_new_data();
	if (!new)
		return (NULL);
	new->nbr = nb;
	data->prev = data;
	data->next = NULL;
	return (new);
}

//Create a new pile struct
//and initialise it to 0   (fct used once in main.c)
t_pile	*l_new_pil(void)
{
	t_pile	*new;

	new = malloc(sizeof(t_pile) * 1);
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts_util.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuro <kuro@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 15:45:19 by kuro              #+#    #+#             */
/*   Updated: 2023/06/08 16:51:13 by kuro             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int lstlen(t_data *pile)
{
    int     i;
    t_data  *tmp;
    
    i = 0;
    
    tmp = pile;
    while (tmp)
    {
        tmp = tmp->next;
        i++;
    }
    return (i);
}

t_data  *search_smoll(t_data *pile)
{
    t_data	*tmp;
	t_data	*smoll;

	tmp = pile;
	smoll = pile;
	while (tmp)
	{
		if (smoll->index <= tmp->index)
			tmp = tmp->next;
		else
		{
			smoll = smoll->next;
			tmp = pile;
		}
	}
    return (smoll);
}

//put the 'index' element at the top of the pile
void	up_smoll(t_data **pile)
{
    t_data  *tmp;
    t_data  *smoll;
    int     len;

    tmp = *pile;
    smoll = search_smoll(*pile);
    len = lstlen(*pile);
    printf("\n nb = %d pos = %d, len = %d\n", smoll->nbr, smoll->pos, len);
	while (tmp->index != smoll->index)
	{
        if (smoll->pos >= (len / 2) + 1)
            ft_rra(&tmp);
        else
            ft_ra(&tmp);
    }
    *pile = tmp;
	return ;
}
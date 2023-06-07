/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorts_util.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuro <kuro@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 15:45:19 by kuro              #+#    #+#             */
/*   Updated: 2023/06/07 16:13:17 by kuro             ###   ########.fr       */
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
void	up_smoll(t_data *pile)
{

    t_data  *smoll;
    int     len;

    smoll = search_smoll(pile);
    len = lstlen(pile);
	while (pile->index != smoll->index)
	{
        if (smoll->pos >= (len / 2) + 1)
            ft_rra(&pile);
        else
            ft_ra(&pile);
    }
	printf("\nindex = %d\n", smoll->index);
	return ;
}
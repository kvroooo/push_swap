/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 12:22:52 by smlamali          #+#    #+#             */
/*   Updated: 2023/04/23 17:35:06 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_pile	pile;

	pile.a = NULL;
	if (argc != 2)
		return (0);
	if (ft_check(argv[1], &pile) != 0)
	{
		ft_error("retry with correct number");
		free(pile.a);
		return (0);
	}
	free(pile.a);
}

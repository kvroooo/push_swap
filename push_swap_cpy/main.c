/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 12:22:52 by smlamali          #+#    #+#             */
/*   Updated: 2023/04/26 17:21:15 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	int		j;
	t_pile	pile;

	j = 1;
	pile.a = NULL;
	if (argc == 1)
		return (0);
	while (argv[j])
	{
		if (ft_check(argv[j], &pile) != 0)
			return (1);
	}
	free(pile.a);
}

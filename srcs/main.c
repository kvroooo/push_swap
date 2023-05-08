/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuro <kuro@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 18:15:39 by kuro              #+#    #+#             */
/*   Updated: 2023/05/08 19:09:45 by kuro             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int argc, char *argv[])
{
	t_pile	*pile;

	pile = l_new_pil();
	if (argc == 1)
		return (ft_error("no arg"), 0);
	printf("------ MAIN ------\n");
	if (!ft_check(argv, pile))
		return (ft_error("check said no"), 0);
	pile->a = ft_parse(argv);
	if (pile->a == NULL)
		return (ft_error("flop"), 0);
	printf("[%d] ", pile->a->nbr);
	printf("\n");
	printf("------ END ------\n");
	free_data(pile->a);
	free(pile);
}

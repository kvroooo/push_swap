/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 18:15:39 by kuro              #+#    #+#             */
/*   Updated: 2023/05/09 17:31:09 by smlamali         ###   ########.fr       */
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
	ft_parse(argv, pile);
	if (!pile->a)
		return (ft_error("pile null"), 0);
	print_list(pile->a);
	printf("------ END ------\n");
	free_data(pile->a);
	free(pile);
}

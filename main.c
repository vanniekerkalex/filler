/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/22 16:13:26 by jde-agr           #+#    #+#             */
/*   Updated: 2018/07/23 12:15:14 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"
#include <stdio.h>
#include <fcntl.h>

int		main(void)
{
	t_maps	*maps;
	t_token	*token;

	maps = init_struct();
	token = init_struct_token();
	ft_read(maps, 0);
	init_heatmap(maps);
	find_enemy_token(maps);
	ft_trim(maps, token);
	find_coords(maps, token);
	ft_strdel(maps->t_map);
	ft_putnbr_fd(maps->score_y, 1);
	ft_putchar_fd(' ', 1);
	ft_putnbr_fd(maps->score_x, 1);
	ft_putchar_fd('\n', 1);
	while (1)
	{
		ft_read(maps, 1);
		init_heatmap(maps);
		find_enemy_token(maps);
		ft_trim(maps, token);
		find_coords(maps, token);
		ft_strdel(maps->t_map);
		ft_putnbr_fd(maps->score_y, 1);
		ft_putchar_fd(' ', 1);
		ft_putnbr_fd(maps->score_x, 1);
		ft_putchar_fd('\n', 1);
		if (maps->score_x == 0 && maps->score_y == 0 && maps->score == 0)
			break ;
	}
	return (0);
}

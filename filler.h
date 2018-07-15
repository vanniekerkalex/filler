/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-agr <jde-agr@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 15:06:15 by jde-agr           #+#    #+#             */
/*   Updated: 2018/07/15 14:38:50 by jde-agr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLER_H
# define FILLER_H

# include "libft.h"

struct maps {
	char **map;
	char **t_map;
	int	dim_x;
	int	dim_y;
	int	dim_tx;
	int	dim_ty;
};

struct maps			ft_init_map(char **map, char **t_map);
char				**ft_read_map(struct maps maps, int flag, char **map);
struct maps			ft_read_token(struct maps maps, int flag, char **t_map);
void				print_map(char **map);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchflag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbarrius <hbarrius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 17:50:30 by hbarrius          #+#    #+#             */
/*   Updated: 2020/01/09 17:50:32 by hbarrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_tab   *searchflag(t_tab *tab)
{
    size_t	i;

	i = 0;
	while (tab->searchflag[i] != '\0')
	{
		while (tab->searchflag[i] == tab->trat[tab->i])
		{
			while (tab->trat[tab->i] == '-' && tab->i++)
				tab->flags[0] = '-';
			while (tab->trat[tab->i] == '+' && tab->i++)
				tab->flags[1] = '+';
			while (tab->trat[tab->i] == ' ' && tab->i++)
				tab->flags[3] = ' ';
			while (tab->trat[tab->i] == '0' && tab->i++)
				tab->flags[2] = '0';
			while (tab->trat[tab->i] == '#' && tab->i++)
				tab->flags[4] = '#';
			i = 0;
		}
		i++;
	}
	return (tab);
}

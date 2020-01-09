/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchwide.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbarrius <hbarrius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 17:51:04 by hbarrius          #+#    #+#             */
/*   Updated: 2020/01/09 17:51:06 by hbarrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_tab   *searchwide(t_tab *tab)
{
    while (tab->trat[tab->i] >= '0' && tab->trat[tab->i] <= '9')
    {
        tab->wide *= 10;
        tab->wide += (tab->trat[tab->i] - 48);
        tab->i++;
    }
    return (tab);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchwide.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbarrius <hbarrius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 18:41:51 by marvin            #+#    #+#             */
/*   Updated: 2020/01/27 20:10:30 by hbarrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_tab   *searchwide(t_tab *tab)
{
    if (tab->trat[tab->i] == '*')
    {
        tab->wide = (int)(va_arg(tab->args, int));
        if (tab->wide <= 0)
        {
            tab->wide *= -1;
            tab->flags[0] = '-';
            tab->flags[2] = 'a';
        }
        tab->i++;
    }
    while (tab->trat[tab->i] >= '0' && tab->trat[tab->i] <= '9')
    {
        tab->wide *= 10;
        tab->wide += (tab->trat[tab->i] - 48);
        tab->i++;
    }
    return (tab);
}

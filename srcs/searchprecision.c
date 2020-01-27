/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchprecision.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbarrius <hbarrius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 19:03:11 by marvin            #+#    #+#             */
/*   Updated: 2020/01/27 20:07:35 by hbarrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_tab   *searchprecision(t_tab *tab)
{
    if (tab->trat[tab->i] == '.')
    {
        tab->i++;
        tab->precision = 0;
    }
    if (tab->trat[tab->i] == '*')
    {
        tab->precision = (int)(va_arg(tab->args, int));
        if (tab->precision < 0)
        {
            tab->precision = -1;
        }
        tab->i++;
    }
    while (tab->trat[tab->i] >= '0' && tab->trat[tab->i] <= '9')
    {
        tab->precision *= 10;
        tab->precision += (tab->trat[tab->i] - 48);
        tab->i++;
    }
    return (tab);
}

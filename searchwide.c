/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchwide.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/15 18:41:51 by marvin            #+#    #+#             */
/*   Updated: 2019/12/15 18:41:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

t_tab   searchwide(t_tab *tab)
{
    while (tab->trat[tab->i] >= 0 && tab->trat[tab->i] <= 9)
    {
        tab->precision *= 10;
        tab->precision += tab->trat[tab->i];
        tab->i++;
    }
    return (tab);
}
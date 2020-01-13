/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reiniciar.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbarrius <hbarrius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 19:22:17 by hbarrius          #+#    #+#             */
/*   Updated: 2020/01/13 18:07:44 by hbarrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_tab   *reiniciar(t_tab *tab)
{
    tab->flag_ident = '\0';
    tab->flag_aux = '\0';
    tab->flags[0] = '\0';
    tab->flags[1] = '\0';
    tab->flags[2] = '\0';
    tab->flags[3] = '\0';
    tab->flags[4] = '\0';
    tab->wide = 0;
    tab->precision = -1;
    return(tab);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reiniciar.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbarrius <hbarrius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 19:22:17 by hbarrius          #+#    #+#             */
/*   Updated: 2020/01/27 20:01:09 by hbarrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_tab   *reiniciar(t_tab *tab)
{
    tab->flag_ident = '\0';
    tab->flag_aux = '\0';
    tab->wide = 0;
    tab->precision = -1;
    return(tab);
}

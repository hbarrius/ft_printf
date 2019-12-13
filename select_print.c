/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   select_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbarrius <hbarrius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 18:23:09 by hbarrius          #+#    #+#             */
/*   Updated: 2019/12/11 21:01:43 by hbarrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <string.h>

t_tab   *select_print(t_tab *tab)
{
    char    ident;

    ident = tab->flag_ident;
    if (ident == 'd')
        print_d(tab);
    else if (ident == 's')
        print_s(tab);
    return (tab);
}
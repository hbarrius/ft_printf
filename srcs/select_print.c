/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   select_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbalboa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 18:23:09 by hbarrius          #+#    #+#             */
/*   Updated: 2020/01/13 18:59:57 by dbalboa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_tab   *select_print(t_tab *tab)
{
    char    ident;

    ident = tab->flag_ident;
    if (ident == 'd' || ident == 'i')
        print_d(tab);
    else if (ident == 's')
        print_s(tab);
    else if (ident == 'c')
        print_c(tab);
    else if (ident == 'x' || ident == 'X')
        print_x(tab);
    return (tab);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_x.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbarrius <hbarrius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 18:15:35 by hbarrius          #+#    #+#             */
/*   Updated: 2020/01/09 19:53:08 by hbarrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_tab   *print_x(t_tab *tab)
{
    char    *str;
    char    c;
    int     num;
    int     align;

    align = 0;
    num = (unsigned int)(va_arg(tab->args, unsigned int));

    if (num == 0 && tab->precision == 0)
    {
        print_aux(tab, ' ', tab->wide, 1);
        return (tab);
    }
    c = 'a';
    if (tab->flag_ident == 'X')
        c = 'A';
    if (!(str = ft_itoa_base(num, 16, c)))
        exit(-1);
    if (tab->flags[0] == '-')
        align = 1;
    

}
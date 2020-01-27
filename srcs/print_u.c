/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_u.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbarrius <hbarrius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 20:44:38 by hbarrius          #+#    #+#             */
/*   Updated: 2020/01/27 21:29:06 by hbarrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <string.h>
#include <stdio.h>

static int			get_tens(long int num)
{
	int tens;

	tens = 1;
	if (num == INT32_MIN || num == INT32_MAX)
	{	
		tens = 10;
		return (tens);
	}
	if (num < 0)
		num *= -1;
	while ((num /= 10) > 0)
		tens++;
	return (tens);
}

static t_tab		*logic_u(t_tab *tab, int num, int length, int flag)
{
	int			not_blank;

	not_blank = length;
	if (length <= tab->precision)
		not_blank = tab->precision;
	tab->len += (not_blank <= tab->wide) ? tab->wide : not_blank;
	if (!flag && (tab->flags[2] != '0' || tab->precision >= 0 ))
		print_aux(tab, ' ', tab->wide - not_blank, 0);
	if (tab->flags[2] == '0' && tab->precision < 0)
		print_aux(tab, '0', tab->wide - not_blank, 0);
	print_aux(tab, '0', tab->precision - length, 0);
	ft_putnbr_fd(num , 1);
	if (flag)
		print_aux(tab, ' ', tab->wide - not_blank, 0);
	return (tab);
}

t_tab				*print_u(t_tab *tab)
{
	int			length;
	int			flag;
	unsigned int	num;

	flag = 0;


	
	num = (int)(va_arg(tab->args, int));
	if (num == 0 && tab->precision == 0)
	{
		print_aux(tab, ' ', tab->wide, 1);
		return (tab);
	}
	length = get_tens(num);
	if (tab->flags[0] == '-')
		flag = 1;
	if (tab->flags[2] == '0' && tab->precision == -1 && !tab->flags[0])
		tab->precision = tab->wide;
	logic_u(tab, num, length, flag);
	return (tab);
}
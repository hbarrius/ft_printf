/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   select_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbarrius <hbarrius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/28 21:13:13 by dbalboa-          #+#    #+#             */
/*   Updated: 2020/01/28 23:20:31 by hbarrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_tab		*select_print(t_tab *tab)
{
	char	ident;

	ident = tab->flag_ident;
	if (ident == 'd' || ident == 'i')
		print_d(tab);
	else if (ident == 's')
		print_s(tab);
	else if (ident == 'c')
		print_c(tab);
	else if (ident == 'x' || ident == 'X')
		print_x(tab);
	else if (ident == 'u')
		print_u(tab);
	else if (ident == 'p')
		print_p(tab);
	else if (ident == '%')
	{
		tab->flag_ident = '%';
		print_c(tab);
	}
	else if (va_arg(tab->args, int) == 0)
		return (0);
	return (tab);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_c.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbarrius <hbarrius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 17:41:23 by hbarrius          #+#    #+#             */
/*   Updated: 2020/01/09 17:41:26 by hbarrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


t_tab   *print_c(t_tab *tab)
{
    ft_putchar((char) va_arg(tab->args, int));
    return (tab);
}

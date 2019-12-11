/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbarrius <hbarrius@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 15:53:43 by hbarrius          #+#    #+#             */
/*   Updated: 2019/12/11 15:53:43 by hbarrius         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <ctype.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct  s_tab
{
    const char *format;
    int        len;   
    int        i;
    int        precision;
    va_list    args;
    int        wide;
    char       *cpy;
    char       *trat;
    char       *searchident;
    char       flag_ident;
}               t_tab;

t_tab   *iniciar(t_tab *tab);
int     escribir(t_tab *tab);
int     ft_printf(const char *format,...);
t_tab   *searchident(t_tab *tab);
int     tratar(t_tab *tab);
t_tab   *select_print(t_tab *tab);
t_tab   *print_d(t_tab *tab);
t_tab   *reiniciar(t_tab *tab);
t_tab   *print_s(t_tab *tab);

#endif




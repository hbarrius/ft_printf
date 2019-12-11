/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iniciar.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 18:55:37 by marvin            #+#    #+#             */
/*   Updated: 2019/12/05 18:55:37 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <string.h>

t_tab   *iniciar(t_tab *tab)
{
    tab->len = 0;
    tab->i = 0;
    tab->cpy = (char*)tab->format;
    tab->trat = (char*)tab->format;
    tab->searchident = "d%";
    return (tab);
}
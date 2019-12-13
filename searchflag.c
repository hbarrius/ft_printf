/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   searchflag.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/13 20:35:17 by marvin            #+#    #+#             */
/*   Updated: 2019/12/13 20:35:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

t_tab   searchflags (t_tab *tab)
{
    size_t  i;

    i = 0;
    while(tab->searchflag[i] != '\0')
    {
        if(tab->searchflag[i] == tab->trat[tab->i])
        {
            tab->flag_aux = tab->searchflag[i];
        }
        i++;
    }
}

t_tab selectflag (t_tab *tab)
{
    char flag;

    flag = tab->flag_aux;
    if(strcmp(flag, '-') == 0) 
        tab->flags[0] = 1;
    else if(strcmp(flag, '+') == 0) 
        tab->flags[1] = 1;
    else if(strcmp(flag, '0') == 0) 
        tab->flags[2] = 1;
    else if(strcmp(flag, ' ') == 0) 
        tab->flags[3] = 1;
    return (tab);
}
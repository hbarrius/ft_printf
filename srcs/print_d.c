/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   print_d.c										  :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: dbalboa- <marvin@42.fr>					+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2019/12/11 18:29:42 by hbarrius		  #+#	#+#			 */
/*   Updated: 2019/12/17 20:12:46 by dbalboa-		 ###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "ft_printf.h"
#include <string.h>

static int get_tens(int num)
{
	int tens;
	if (num == INT32_MIN || num == INT32_MAX)
	{	
		tens = 10;
		return (tens);
	}
	if (num < 0)
		num *= -1;
	tens = 1;
	while ((num /= 10) > 0)
		tens++;
	return(tens);
}

static char  get_sign(t_tab *tab, int is_neg)
{
  	char *tmp;

	tmp = tab->flags;
	if (is_neg)
		return('-');
	if (tmp[1] == '+')
		return ('+');
	if (tmp[3] == ' ')
		return (' ');
	return ('\0');
}

static t_tab	*logic_d(t_tab *tab, int num, int num_len, int align_left)
{
	int		not_blank;
	char	sign;
	int		is_negative;

	is_negative = (num < 0) ? 1 : 0;
	num *= (is_negative) ? -1 : 1;
	sign = get_sign(tab, is_negative);
	not_blank = num_len;
	if (num_len <= tab->precision && tab->precision >= 0)
		not_blank = tab->precision;
	if (sign)
		not_blank++;
	tab->len += (not_blank <= tab->wide) ? tab->wide : not_blank;
	if (!align_left && (tab->flags[2] != '0' || tab->precision >= 0 ))
		print_aux(tab, ' ', tab->wide - not_blank, 0);
	if (sign && INT32_MAX != num && INT32_MIN != num)
		write(1, &sign, 1);
	if (tab->flags[2] == '0' && tab->precision < 0)
		print_aux(tab, '0', tab->wide - not_blank, 0);
	print_aux(tab, '0', tab->precision - num_len, 0);
	ft_putnbr_fd(num, 1);
	if (align_left && (tab->flags[2] != '0' || tab->precision >= 0 ))
		print_aux(tab, ' ', tab->wide - not_blank, 0);
	return (tab);
}

t_tab   *print_d(t_tab *tab)
{
	int	num;
	int	num_len;
	int	align_left;

	num = (int)(va_arg(tab->args, int));
	num = (intmax_t)num;
	if (num == 0 && tab->precision == 0)
	{
		if (tab->flags[1] == '+')
			write(1, "+", 1);
		if (tab->flags[3] == ' ')
			write(1, " ", 1);
		print_aux(tab, ' ', tab->wide, 1);
		return (tab);
	}
	num_len = get_tens(num);
	align_left = (tab->flags[0] == '-') ? 1 : 0;
	if (tab->flags[2] == 1 && tab->precision == 0)
	{
		tab->precision = tab->wide;
		if (num < 0 || tab->flags[3] || tab->flags[1] || tab->flags[0])
			tab->precision--;
	}
	logic_d(tab, num, num_len, align_left);
	return (tab);
}

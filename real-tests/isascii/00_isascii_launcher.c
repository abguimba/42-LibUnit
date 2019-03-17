/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_isascii_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adroppel <adroppel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 17:19:24 by adroppel          #+#    #+#             */
/*   Updated: 2018/12/02 18:05:15 by abguimba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "real_tests.h"

int		isascii_launcher(void)
{
	t_unit_test	*testlist;
	int			value_test;
	int			lst_len;

	testlist = NULL;
	ft_putendl("ISASCII:");
	load(&testlist, "really NULL test	", &isascii_really_null_test);
	load(&testlist, "NULL test		", &isascii_null_test);
	load(&testlist, "Basic test		", &isascii_bbasic_test);
	load(&testlist, "number test		", &isascii_number_test);
	load(&testlist, "punct test		", &isascii_punct_test);
	load(&testlist, "alfa test		", &isascii_alfa_test);
	load(&testlist, "C special test		", &isascii_special_test);
	value_test = launch_test(&testlist);
	lst_len = unit_lst_len(testlist);
	ft_putchar('\n');
	ft_putnbr(value_test);
	ft_putchar('/');
	ft_putnbr(lst_len);
	ft_putstr(" tests valides");
	if (lst_len == value_test)
	{
		ft_putendl(ANSI_COLOR_YELLOW"  -  PERFECT\n"ANSI_COLOR_RESET);
		free_lst(&testlist);
		return (0);
	}
	else
	{
		ft_putendl(ANSI_COLOR_RED"  -  Corrections needed\n"ANSI_COLOR_RESET);
		free_lst(&testlist);
		return (-1);
	}
}

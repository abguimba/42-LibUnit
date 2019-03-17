/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_atoi_launcher.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adroppel <adroppel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 17:04:03 by adroppel          #+#    #+#             */
/*   Updated: 2018/12/02 18:04:59 by abguimba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "real_tests.h"

int		atoi_launcher(void)
{
	t_unit_test	*testlist;
	int			value_test;
	int			lst_len;

	testlist = NULL;
	ft_putendl("ATOI:");
	load(&testlist, "Basic test		", &atoi_basic_test);
	load(&testlist, "NULL test		", &atoi_null_test);
	load(&testlist, "Max int test		", &atoi_max_int_test);
	load(&testlist, "Min int test		", &atoi_min_int_test);
	load(&testlist, "Basic test		", &atoi_bbasic_test);
	load(&testlist, "Basic test		", &atoi_bbbasic_test);
	load(&testlist, "alfa test		", &atoi_alfa_test);
	load(&testlist, "empty test		", &atoi_empty_test);
	load(&testlist, "Plus test		", &atoi_plus_test);
	load(&testlist, "Moins test		", &atoi_moins_test);
	load(&testlist, "espace test		", &atoi_espace_test);
	load(&testlist, "plus ou moins test	", &atoi_plus_ou_moins_test);
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_error_launcher.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adroppel <adroppel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 15:41:42 by adroppel          #+#    #+#             */
/*   Updated: 2018/12/02 18:47:00 by abguimba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int		error_launcher(void)
{
	t_unit_test	*testlist;
	int			value_test;
	int			lst_len;

	testlist = NULL;
	ft_putendl("ERRORS:");
	load(&testlist, "OK		", &ok_strcpy_test);
	load(&testlist, "KO		", &ko_strcpy_test);
	load(&testlist, "BUS		", &bus_strcpy_test);
	load(&testlist, "SEG		", &seg_strcpy_test);
	load(&testlist, "TIMEOUT	", &timeout_strcpy_test);
	load(&testlist, "SIGABORT	", &sigabort_strcpy_test);
	load(&testlist, "FPE		", &fpe_strcpy_test);
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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strlen_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adroppel <adroppel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 17:46:03 by adroppel          #+#    #+#             */
/*   Updated: 2018/12/02 18:01:56 by abguimba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "real_tests.h"

int		strlen_launcher(void)
{
	t_unit_test	*testlist;
	int			value_test;
	int			lst_len;

	testlist = NULL;
	ft_putendl("STRLEN:");
	load(&testlist, "Basic test		", &strlen_basic_test);
	load(&testlist, "NULL test		", &strlen_null_test);
	load(&testlist, "One C test		", &strlen_one_c_test);
	load(&testlist, "Big test		", &strlen_big_test);
	load(&testlist, "Hard test		", &strlen_hard_test);
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

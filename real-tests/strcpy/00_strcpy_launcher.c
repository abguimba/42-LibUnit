/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_strcpy_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adroppel <adroppel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 17:48:22 by adroppel          #+#    #+#             */
/*   Updated: 2018/12/02 18:00:57 by abguimba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "real_tests.h"

int		strcpy_launcher(void)
{
	t_unit_test	*testlist;
	int			value_test;
	int			lst_len;

	testlist = NULL;
	ft_putendl("STRCPY:");
	load(&testlist, "s1 null test		", &strcpy_s1_null_test);
	load(&testlist, "s2 null test		", &strcpy_s2_null_test);
	load(&testlist, "Both null test		", &strcpy_both_null_test);
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

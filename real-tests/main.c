/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abguimba <abguimba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 14:31:53 by abguimba          #+#    #+#             */
/*   Updated: 2018/12/02 17:31:55 by abguimba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "real_tests.h"

void	free_lst(t_unit_test **lst)
{
	t_unit_test	*tmp;
	t_unit_test	*memory;

	tmp = *lst;
	while (tmp)
	{
		memory = tmp;
		tmp = tmp->next;
		free(memory);
	}
}

int		unit_lst_len(t_unit_test *lst)
{
	int		i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

int		main(void)
{
	int		count;

	count = 4;
	ft_putendl(" ******************************************");
	ft_putendl("***      42  - Unit Tests - (Libft)      ***");
	ft_putendl(" ******************************************");
	count += strlen_launcher();
	count += atoi_launcher();
	count += isascii_launcher();
	count += strcpy_launcher();
	if (count < 0)
		count = 0;
	ft_putstr(ANSI_COLOR_MAGENTA);
	ft_putnbr(count);
	ft_putstr(ANSI_COLOR_RESET);
	ft_putstr(ANSI_COLOR_MAGENTA"/4 GLOBAL TESTS PASSED\n"ANSI_COLOR_RESET);
	return (count == 4 ? 0 : -1);
}

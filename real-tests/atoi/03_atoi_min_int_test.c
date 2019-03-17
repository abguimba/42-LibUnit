/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_atoi_min_int_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adroppel <adroppel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 15:33:25 by adroppel          #+#    #+#             */
/*   Updated: 2018/12/01 21:21:46 by abguimba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"
#include "libft.h"
#include <stdlib.h>

int		atoi_min_int_test(void)
{
	if (atoi("-2147483648") == ft_atoi("-2147483648"))
		return (0);
	else
		return (-1);
}

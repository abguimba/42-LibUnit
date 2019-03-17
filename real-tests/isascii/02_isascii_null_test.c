/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_isascii_null_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adroppel <adroppel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 15:23:00 by adroppel          #+#    #+#             */
/*   Updated: 2018/12/01 19:44:41 by abguimba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "real_tests.h"
#include "libft.h"

int		isascii_null_test(void)
{
	if (ft_isascii(0) == isascii(0))
		return (0);
	else
		return (-1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_number_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adroppel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 18:03:09 by adroppel          #+#    #+#             */
/*   Updated: 2018/12/01 18:03:13 by adroppel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "real_tests.h"
#include "libft.h"

int		isascii_number_test(void)
{
	if (ft_isascii('2') == isascii('2'))
		return (0);
	else
		return (-1);
}

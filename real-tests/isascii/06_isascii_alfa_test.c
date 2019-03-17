/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_alfa_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adroppel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 17:54:13 by adroppel          #+#    #+#             */
/*   Updated: 2018/12/01 17:54:17 by adroppel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "real_tests.h"
#include "libft.h"

int		isascii_alfa_test(void)
{
	if (ft_isascii('a') == isascii('a'))
		return (0);
	else
		return (-1);
}

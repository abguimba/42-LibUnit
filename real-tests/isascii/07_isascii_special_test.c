/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_special_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adroppel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 17:53:25 by adroppel          #+#    #+#             */
/*   Updated: 2018/12/01 17:53:37 by adroppel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "real_tests.h"
#include "libft.h"

int		isascii_special_test(void)
{
	if (ft_isascii('*') == isascii('*'))
		return (0);
	else
		return (-1);
}

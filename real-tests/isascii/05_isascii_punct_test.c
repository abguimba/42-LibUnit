/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_punct_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adroppel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 17:59:15 by adroppel          #+#    #+#             */
/*   Updated: 2018/12/01 18:02:29 by adroppel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include "real_tests.h"
#include "libft.h"

int		isascii_punct_test(void)
{
	if (ft_isascii(',') == isascii(','))
		return (0);
	else
		return (-1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_alfa_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adroppel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 17:36:07 by adroppel          #+#    #+#             */
/*   Updated: 2018/12/01 17:36:10 by adroppel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"
#include "libft.h"
#include <stdlib.h>

int		atoi_alfa_test(void)
{
	if (ft_atoi("QAdssa") == atoi("QAdssa"))
		return (0);
	else
		return (-1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adroppel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 15:35:48 by adroppel          #+#    #+#             */
/*   Updated: 2018/12/01 16:47:52 by adroppel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"
#include "libft.h"
#include <stdlib.h>

int		atoi_bbbasic_test(void)
{
	if (ft_atoi("-321") == atoi("-321"))
		return (0);
	else
		return (-1);
}

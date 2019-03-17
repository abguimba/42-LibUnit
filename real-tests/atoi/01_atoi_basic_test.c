/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adroppel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 15:30:25 by adroppel          #+#    #+#             */
/*   Updated: 2018/12/01 16:47:22 by adroppel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"
#include "libft.h"
#include <stdlib.h>

int		atoi_basic_test(void)
{
	if (ft_atoi("33") == atoi("33"))
		return (0);
	else
		return (-1);
}

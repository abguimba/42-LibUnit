/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_empty_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adroppel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 17:36:21 by adroppel          #+#    #+#             */
/*   Updated: 2018/12/01 17:36:24 by adroppel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"
#include "libft.h"
#include <stdlib.h>

int		atoi_empty_test(void)
{
	if (ft_atoi("") == atoi(""))
		return (0);
	else
		return (-1);
}

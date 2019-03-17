/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10_moins_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adroppel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 17:38:14 by adroppel          #+#    #+#             */
/*   Updated: 2018/12/01 17:38:33 by adroppel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"
#include "libft.h"
#include <stdlib.h>

int		atoi_moins_test(void)
{
	if (ft_atoi("-9") == atoi("-9"))
		return (0);
	else
		return (-1);
}

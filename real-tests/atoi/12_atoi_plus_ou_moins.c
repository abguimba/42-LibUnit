/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   12_plus_ou_moins.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adroppel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 17:39:51 by adroppel          #+#    #+#             */
/*   Updated: 2018/12/01 17:40:19 by adroppel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"
#include "libft.h"
#include <stdlib.h>

int		atoi_plus_ou_moins_test(void)
{
	if (ft_atoi("  +-+123") == atoi("  +-+123"))
		return (0);
	else
		return (-1);
}

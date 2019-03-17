/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11_espace_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adroppel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 17:38:45 by adroppel          #+#    #+#             */
/*   Updated: 2018/12/01 17:39:14 by adroppel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "real_tests.h"
#include "libft.h"
#include <stdlib.h>

int		atoi_espace_test(void)
{
	if (ft_atoi("   \n-13") == atoi("   \n-13"))
		return (0);
	else
		return (-1);
}

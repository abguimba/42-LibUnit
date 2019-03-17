/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adroppel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 14:54:59 by adroppel          #+#    #+#             */
/*   Updated: 2018/12/01 16:37:54 by adroppel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		strlen_basic_test(void)
{
	if (ft_strlen("Hello") == strlen("Hello"))
		return (0);
	else
		return (-1);
}

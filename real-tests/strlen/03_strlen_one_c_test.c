/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_test.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adroppel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 14:58:21 by adroppel          #+#    #+#             */
/*   Updated: 2018/12/01 16:35:59 by adroppel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		strlen_one_c_test(void)
{
	if (ft_strlen("E") == strlen("E"))
		return (0);
	else
		return (-1);
}

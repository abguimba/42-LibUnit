/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_NULL_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adroppel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 14:56:45 by adroppel          #+#    #+#             */
/*   Updated: 2018/12/01 16:35:40 by adroppel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		strlen_null_test(void)
{
	if (ft_strlen("") == strlen(""))
		return (0);
	else
		return (-1);
}

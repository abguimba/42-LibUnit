/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_big_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adroppel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 15:01:44 by adroppel          #+#    #+#             */
/*   Updated: 2018/12/01 16:36:22 by adroppel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		strlen_big_test(void)
{
	if (ft_strlen("William Shakespeare, baptisé le 26 avril 1564")
			== strlen("William Shakespeare, baptisé le 26 avril 1564"))
		return (0);
	else
		return (-1);
}

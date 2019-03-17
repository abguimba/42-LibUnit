/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05_strlen_hard_test.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adroppel <adroppel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 15:09:18 by adroppel          #+#    #+#             */
/*   Updated: 2018/12/01 21:20:16 by abguimba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		strlen_hard_test(void)
{
	char	test[200001];

	test[200000] = '\0';
	ft_strfill(test, 'a', 199999);
	if (strlen(test) == ft_strlen(test))
		return (0);
	else
		return (-1);
}

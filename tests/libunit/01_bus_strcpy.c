/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_bus_strcpy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adroppel <adroppel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 15:38:27 by adroppel          #+#    #+#             */
/*   Updated: 2018/12/02 17:31:16 by abguimba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int		bus_strcpy_test(void)
{
	char	s1[3];
	char	s2[3];

	if (ft_strcpy_bus(s1, s2) == strcpy(s1, s2))
		return (0);
	else
		return (-1);
}

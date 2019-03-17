/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_seg_strcpy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adroppel <adroppel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 15:39:40 by adroppel          #+#    #+#             */
/*   Updated: 2018/12/02 17:30:31 by abguimba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int		seg_strcpy_test(void)
{
	char	s1[2];
	char	s2[3];

	if (ft_strcpy_seg(s1, s2) == strcpy(s1, s2))
		return (0);
	else
		return (-1);
}

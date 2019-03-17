/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_fpe_strcpy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adroppel <adroppel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 15:40:06 by adroppel          #+#    #+#             */
/*   Updated: 2018/12/02 17:30:19 by abguimba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int		fpe_strcpy_test(void)
{
	char	s1[3];
	char	s3[3];

	if (ft_strcpy_fpe(s1, s3) == strcpy(s1, s3))
		return (0);
	else
		return (-1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_sigabort_strcpy.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adroppel <adroppel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 15:41:42 by adroppel          #+#    #+#             */
/*   Updated: 2018/12/02 17:29:51 by abguimba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int		sigabort_strcpy_test(void)
{
	char	s1[3];
	char	s3[3];

	if (ft_strcpy_sigabort(s1, s3) == strcpy(s1, s3))
		return (0);
	else
		return (-1);
}

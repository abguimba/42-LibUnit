/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_strcpy_s1_null_test.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adroppel <adroppel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 16:16:00 by adroppel          #+#    #+#             */
/*   Updated: 2018/12/02 15:15:21 by abguimba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include "real_tests.h"

int		strcpy_s1_null_test(void)
{
	char	*s1;
	char	*s2;

	if ((s2 = (char*)malloc(sizeof(char) * 3)) == NULL)
		return (0);
	s2[0] = 'a';
	s2[1] = 'b';
	s2[2] = 'c';
	if ((s1 = (char*)malloc(sizeof(char) * 1)) == NULL)
		return (0);
	s1[0] = 0;
	if (ft_strcpy(s1, s2) == strcpy(s1, s2))
		return (0);
	else
		return (-1);
}

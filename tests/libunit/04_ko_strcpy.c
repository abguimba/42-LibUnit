/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_ko_strcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adroppel <adroppel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 15:40:27 by adroppel          #+#    #+#             */
/*   Updated: 2018/12/02 17:26:51 by abguimba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

int		ko_strcpy_test(void)
{
	char	*s1;
	char	*s2;

	if ((s1 = (char*)malloc(sizeof(char) * 3)) == NULL)
		return (0);
	s1[0] = 'a';
	s1[1] = 'b';
	s1[2] = 'c';
	if ((s2 = (char*)malloc(sizeof(char) * 3)) == NULL)
		return (0);
	s2[0] = 'd';
	s2[1] = 'e';
	s2[2] = 'f';
	if (ft_strcpy_ko(s1, s2) == strcpy(s1, s2))
		return (0);
	else
		return (-1);
}

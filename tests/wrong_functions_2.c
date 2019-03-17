/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrong_functions_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adroppel <adroppel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 15:15:35 by adroppel          #+#    #+#             */
/*   Updated: 2018/12/02 17:03:24 by abguimba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

char	*ft_strcpy_sigabort(char *dest, const char *src)
{
	char	*str;

	str = malloc(sizeof(char) * 5);
	free(str);
	(void)src;
	(void)dest;
	free(str);
	return (dest);
}

char	*ft_strcpy_fpe(char *dest, const char *src)
{
	int		i;
	int		c;

	i = 10;
	c = 1;
	i = i / (c - 1);
	(void)src;
	(void)dest;
	return (dest);
}

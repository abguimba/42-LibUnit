/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrong_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adroppel <adroppel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 15:15:35 by adroppel          #+#    #+#             */
/*   Updated: 2018/12/02 17:21:12 by abguimba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "tests.h"

char	*ft_strcpy_ok(char *dest, const char *src)
{
	int i;

	i = 0;
	if (src && dest)
	{
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = src[i];
	}
	return (dest);
}

char	*ft_strcpy_bus(char *dest, const char *src)
{
	int i;

	dest = "bus error";
	i = 0;
	if (src && dest)
	{
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = src[i];
	}
	return (dest);
}

char	*ft_strcpy_timeout(char *dest, const char *src)
{
	int i;

	while (42)
	{
	}
	i = 0;
	if (src && dest)
	{
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = src[i];
	}
	return (dest);
}

char	*ft_strcpy_seg(char *dest, const char *src)
{
	int i;

	i = 0;
	if (src && dest)
	{
		while (i != 532785)
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = src[i];
	}
	return (dest);
}

char	*ft_strcpy_ko(char *dest, const char *src)
{
	char *aaa;

	(void)dest;
	(void)src;
	aaa = NULL;
	return (aaa);
}

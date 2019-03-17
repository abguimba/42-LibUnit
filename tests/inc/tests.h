/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adroppel <adroppel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 16:41:31 by adroppel          #+#    #+#             */
/*   Updated: 2018/12/02 17:29:08 by abguimba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REAL_TESTS_H

# define REAL_TESTS_H

# include "libunit.h"

void	free_lst(t_unit_test **lst);
int		unit_lst_len(t_unit_test *lst);

char	*ft_strcpy_ok(char *dest, const char *src);
char	*ft_strcpy_bus(char *dest, const char *src);
char	*ft_strcpy_timeout(char *dest, const char *src);
char	*ft_strcpy_seg(char *dest, const char *src);
char	*ft_strcpy_ko(char *dest, const char *src);
char	*ft_strcpy_sigabort(char *dest, const char *src);
char	*ft_strcpy_fpe(char *dest, const char *src);

void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void	ft_putnbr(int n);

int		error_launcher(void);
int		bus_strcpy_test(void);
int		seg_strcpy_test(void);
int		ok_strcpy_test(void);
int		timeout_strcpy_test(void);
int		ko_strcpy_test(void);
int		sigabort_strcpy_test(void);
int		fpe_strcpy_test(void);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   real_tests.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adroppel <adroppel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 16:41:31 by adroppel          #+#    #+#             */
/*   Updated: 2018/12/02 17:38:11 by abguimba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REAL_TESTS_H

# define REAL_TESTS_H

# include "libunit.h"

void	free_lst(t_unit_test **lst);
int		unit_lst_len(t_unit_test *lst);

int		isascii_launcher(void);
int		isascii_bbasic_test(void);
int		isascii_null_test(void);
int		isascii_punct_test(void);
int		isascii_number_test(void);
int		isascii_special_test(void);
int		isascii_really_null_test(void);
int		isascii_alfa_test(void);

int		atoi_launcher(void);
int		atoi_plus_test(void);
int		atoi_moins_test(void);
int		atoi_espace_test(void);
int		atoi_plus_ou_moins_test(void);
int		atoi_alfa_test(void);
int		atoi_empty_test(void);
int		atoi_max_int_test(void);
int		atoi_min_int_test(void);
int		atoi_bbbasic_test(void);
int		atoi_bbasic_test(void);
int		atoi_null_test(void);
int		atoi_basic_test(void);

int		strcpy_launcher(void);
int		strcpy_s1_null_test(void);
int		strcpy_s2_null_test(void);
int		strcpy_both_null_test(void);

int		strlen_launcher(void);
int		strlen_hard_test(void);
int		strlen_big_test(void);
int		strlen_one_c_test(void);
int		strlen_null_test(void);
int		strlen_basic_test(void);

#endif

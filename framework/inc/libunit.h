/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abguimba <abguimba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 14:23:14 by abguimba          #+#    #+#             */
/*   Updated: 2018/12/02 18:06:29 by abguimba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H

# define LIBUNIT_H

# include <sys/wait.h>
# include <signal.h>
# include "../../real-tests/libft/includes/libft.h"

typedef struct	s_unit_test
{
	char				*test;
	int					(*function)(void);
	struct s_unit_test	*next;
}				t_unit_test;

# define ANSI_COLOR_RED     "\x1b[31m"
# define ANSI_COLOR_GREEN   "\x1b[32m"
# define ANSI_COLOR_YELLOW  "\x1b[33m"
# define ANSI_COLOR_BLUE    "\x1b[34m"
# define ANSI_COLOR_MAGENTA "\x1b[35m"
# define ANSI_COLOR_CYAN    "\x1b[36m"
# define ANSI_COLOR_RESET   "\x1b[0m"
# define TIME_LIMIT 5

t_unit_test		*new_test(char *name, int (*function)(void));
void			load(t_unit_test **list, char *name, int (*function)(void));
int				output_result(pid_t pid);
int				exec_test(int (*function)(void));
int				launch_test(t_unit_test **test_list);

#endif

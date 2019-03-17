/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abguimba <abguimba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/01 14:31:53 by abguimba          #+#    #+#             */
/*   Updated: 2018/12/02 17:40:44 by abguimba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

t_unit_test	*new_test(char *name, int (*function)(void))
{
	t_unit_test	*new;

	if (!(new = (t_unit_test*)malloc(sizeof(t_unit_test))))
		return (NULL);
	new->test = name;
	new->function = function;
	return (new);
}

void		load(t_unit_test **list, char *name, int (*function)(void))
{
	t_unit_test	*new;

	new = new_test(name, function);
	new->next = *list;
	*list = new;
}

int			output_result(pid_t pid)
{
	if (WIFEXITED(pid))
	{
		if (pid == 0)
		{
			ft_putendl(ANSI_COLOR_GREEN"[OK]"ANSI_COLOR_RESET);
			return (1);
		}
		else if (pid == 256)
			ft_putendl(ANSI_COLOR_RED"[KO]"ANSI_COLOR_RESET);
	}
	if (WIFSIGNALED(pid))
	{
		if (WTERMSIG(pid) == SIGALRM)
			ft_putendl(ANSI_COLOR_RED"[TIMEOUT]"ANSI_COLOR_RESET);
		if (WTERMSIG(pid) == SIGSEGV)
			ft_putendl(ANSI_COLOR_RED"[SEGV]"ANSI_COLOR_RESET);
		if (WTERMSIG(pid) == SIGBUS)
			ft_putendl(ANSI_COLOR_RED"[BUSE]"ANSI_COLOR_RESET);
		if (WTERMSIG(pid) == SIGABRT)
			ft_putendl(ANSI_COLOR_RED"[SIGA]"ANSI_COLOR_RESET);
		if (WTERMSIG(pid) == SIGFPE)
			ft_putendl(ANSI_COLOR_RED"[FPTE]"ANSI_COLOR_RESET);
	}
	return (0);
}

int			exec_test(int (*function)(void))
{
	pid_t	pid;

	pid = fork();
	if (pid == 0)
	{
		alarm(TIME_LIMIT);
		if (function() == 0)
			exit(0);
		exit(1);
	}
	if (pid > 0)
		wait(&pid);
	return (output_result(pid));
}

int			launch_test(t_unit_test **test_list)
{
	t_unit_test	*tmp;
	int			count;

	count = 0;
	tmp = *test_list;
	while (tmp)
	{
		ft_putstr("       > ");
		ft_putstr(tmp->test);
		ft_putstr(" : ");
		count += exec_test(tmp->function);
		tmp = tmp->next;
	}
	return (count);
}

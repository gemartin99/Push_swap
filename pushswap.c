/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gemartin <gemartin@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 12:25:41 by gemartin          #+#    #+#             */
/*   Updated: 2022/04/13 18:35:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
#include<signal.h>

int		arg_to_int(t_list *d, int arc, char **args);
int		ft_choose_size(int arc, t_list *d);
int		init_data(t_list *d);

int	main(int arc, char **args)
{
	t_list	*d;
	int		j;

	j = 0;
	if (arc == 1)
		return (0);
	if (arc == 2)
		arc = ft_space(args[1]) + 1;
	d = malloc(sizeof(t_list));
	if (!d)
		return (0);
	d->argc = arc - 1;
	d->error = 0;
	if (init_data(d) == -1)
		return (0);
	if (arg_to_int(d, arc, args) == -1)
	{
		ft_free(d);
		return (0);
	}
	if (check_order(d) == -1)
		return (0);
	if (ft_choose_size(arc, d) == -1)
		ft_free(d);
	return (0);
}

int	ft_choose_size(int arc, t_list *d)
{
	if (check_same_nums(d) == -1)
		return (-1);
	else
	{
		if (arc == 3 || arc == 4)
			size3(d->sa, d);
		if (arc < 7 && arc > 4)
			size5(d->sa, d);
		if (arc < 102 && arc > 6)
			size100(d);
		if (arc > 101)
			size500(d);
	}
	return (0);
}

int	arg_to_int(t_list *d, int arc, char **args)
{
	int	i;

	i = 0;
	d->atoierror = 0;
	if (args[1] && !args[2])
	{
		if (ft_arg2_to_int(args[1], d) == -1)
			return (-1);
		d->atoierror = 1;
	}
	while (i != arc - 1 && d->atoierror == 0)
	{
		if (check_num(args[i + 1]) == -1)
			return (-1);
		d->sa[i] = ft_atoi(args[i + 1], d);
		if (d->atoierror == 1)
			return (-1);
		d->sp[i] = ft_atoi(args[i + 1], d);
		i++;
	}
	d->atoierror = 0;
	return (0);
}

int	init_data(t_list *d)
{
	d->sa = malloc(sizeof(int) * d->argc);
	if (!d->sa)
	{
		free(d);
		return (-1);
	}
	d->sp = malloc(sizeof(int) * d->argc);
	if (!d->sp)
	{
		free(d->sa);
		free(d);
		return (-1);
	}
	d->sb = malloc(sizeof(int) * d->argc);
	if (!d->sb)
	{
		free(d->sp);
		free(d->sa);
		free(d);
		return (-1);
	}
	d->sia = d->argc;
	d->sib = 0;
	d->sip = d->argc;
	return (0);
}

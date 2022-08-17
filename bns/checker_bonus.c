/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gemartin <gemartin@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 12:25:41 by gemartin          #+#    #+#             */
/*   Updated: 2022/04/13 18:35:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pushswap_bonus.h"

int	check_num(char *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (
		(s[j] == '-' && (s[j + 1] >= '0' && s[j + 1] <= '9'))
		|| (s[j] >= '0' && s[j] <= '9'))
	{
		i++;
	j++;
		while (s[j])
		{
			if (s[j] >= '0' && s[j] <= '9')
				i++;
			j++;
		}
	}
	if (i == ft_strlen(s))
		return (0);
	return (-1);
}

static int	arg_to_int(t_list *d, int arc, char **args)
{
	int	i;

	i = 0;
	d->atoierror = 0;
	while (i != arc - 1 && d->atoierror == 0)
	{
		if (check_num(args[i + 1]) == -1)
			return (-1);
		d->sa[i] = ft_atoi(args[i + 1], d);
		if (d->atoierror == 1)
			return (-1);
		i++;
	}
	d->atoierror = 0;
	return (0);
}

static int	init_data(t_list *d, int arc)
{
	d->argc = arc - 1;
	d->error = 0;
	d->sa = malloc(sizeof(int) * d->argc);
	if (!d->sa)
	{
		free(d);
		return (-1);
	}
	d->sb = malloc(sizeof(int) * d->argc);
	if (!d->sb)
	{
		free(d->sa);
		free(d);
		return (-1);
	}
	d->sia = d->argc;
	d->sib = 0;
	return (0);
}

int	main(int arc, char **args)
{
	t_list	*d;
	int		j;

	j = 0;
	if (arc == 1)
		return (0);
	d = malloc(sizeof(t_list));
	if (!d)
		return (0);
	if (check_args(args, arc - 1) == -1)
		ft_free(d, 0);
	if (init_data(d, arc) == -1)
		return (0);
	if (arg_to_int(d, arc, args) == -1)
	{
		ft_free(d, 0);
		return (0);
	}
	if (check_same_nums(d) == -1)
		ft_free(d, 0);
	ft_checker_lines(d);
	ft_free(d, 1);
	return (0);
}

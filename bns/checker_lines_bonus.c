/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_lines_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gemartin <gemartin@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 13:52:44 by gemartin          #+#    #+#             */
/*   Updated: 2022/04/07 23:10:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pushswap_bonus.h"

static int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i + 1 < n)
	{
		i++;
	}
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}

void	filter_function(char *line, t_list *d)
{
	if (ft_strncmp(line, "sa\n", 3) == 0)
		sa(d->sa);
	else if (ft_strncmp(line, "sb\n", 3) == 0)
		sb(d->sb);
	else if (ft_strncmp(line, "ss\n", 3) == 0)
		ss(d);
	else if (ft_strncmp(line, "pa\n", 3) == 0)
		pa(d);
	else if (ft_strncmp(line, "pb\n", 3) == 0)
		pb(d);
	else if (ft_strncmp(line, "ra\n", 3) == 0)
		ra(d);
	else if (ft_strncmp(line, "rb\n", 3) == 0)
		rb(d);
	else if (ft_strncmp(line, "rr\n", 3) == 0)
		rr(d);
	else if (ft_strncmp(line, "rra\n", 4) == 0)
		rra(d);
	else if (ft_strncmp(line, "rrb\n", 4) == 0)
		rrb(d);
	else if (ft_strncmp(line, "rrr\n", 4) == 0)
		rrr(d);
	else
		ft_free(d, 0);
}

static int	check_order(t_list *d)
{
	int	i;

	i = -1;
	while (++i < d->sia - 1)
	{
		if (d->sa[i] > d->sa[i + 1])
			return (-1);
	}
	if (d->sib > 0)
		return (-1);
	return (1);
}

static int	check_order_sib(t_list *d)
{
	if (check_order(d) == 1 && d->sib == 0)
		return (0);
	else
		return (1);
}

void	ft_checker_lines(t_list *d)
{
	char	*line;

	while (1)
	{
		line = get_next_line(0);
		if (!line)
			break ;
		filter_function(line, d);
		if (line)
			free(line);
	}
	if (line)
		free(line);
	if (check_order_sib(d) == 0)
		write (1, "OK\n", 3);
	else
		write (1, "KO\n", 3);
}

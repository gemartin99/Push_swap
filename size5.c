/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/11 06:31:10 by marvin            #+#    #+#             */
/*   Updated: 2022/04/13 09:03:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	size4(int *s, t_list *d)
{
	if (d->sia == 4)
	{
		if (s[0] < s[1] && s[0] < s[2] && s[0] < s[3] && d->sia == 4)
			pb(d);
		if (s[0] > s[1] && s[1] < s[2] && s[1] < s[3] && d->sia == 4)
		{
			sa(d->sa);
			pb(d);
		}
		if (s[0] > s[2] && s[1] > s[2] && s[2] < s[3] && d->sia == 4)
		{
			ra(d);
			sa(d->sa);
			pb(d);
		}
		if (s[0] > s[3] && s[1] > s[3] && s[2] > s[3] && d->sia == 4)
		{
			rra(d);
			pb(d);
		}
	}
	if (d->sia == 3)
		size3(d->sa, d);
	pa(d);
}

int	size5_2(int *s, t_list *d, int i)
{
	if (s[0] > s[2] && s[1] > s[2] && s[2] < s[3] && s[2] < s[4] && i == 0)
	{
		ra(d);
		sa(d->sa);
		pb(d);
		i++;
	}
	if (s[0] > s[3] && s[1] > s[3] && s[2] > s[3] && s[3] < s[4] && i == 0)
	{
		rra(d);
		rra(d);
		pb(d);
		i++;
	}
	if (s[0] > s[4] && s[1] > s[4] && s[2] > s[4] && s[3] > s[4] && i == 0)
	{
		rra(d);
		pb(d);
		i++;
	}
	return (i);
}

void	size5(int *s, t_list *d)
{
	int	i;

	i = 0;
	if (d->sia == 5)
	{
		if (s[0] < s[1] && s[0] < s[2] && s[0] < s[3] && s[0] < s[4] && i == 0)
		{
			pb(d);
			i++;
		}
		if (s[0] > s[1] && s[1] < s[2] && s[1] < s[3] && s[1] < s[4] && i == 0)
		{
			sa(d->sa);
			pb(d);
			i++;
		}
		i = size5_2(d->sa, d, i);
	}
	size4(d->sa, d);
	if (i == 1)
	{
		pa(d);
		if (s[0] > s[1])
			sa(d->sa);
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortnum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gemartin <gemartin@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 01:33:50 by gemartin          #+#    #+#             */
/*   Updated: 2022/04/12 18:38:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include<stdio.h>

void	sortnum(t_list *d)
{
	int	i;
	int	c;
	int	j;

	i = 0;
	c = 0;
	j = d->argc;
	while (c < j)
	{
		while (i < j - 1)
		{
			if (d->sp[i] > d->sp[i + 1])
				swap(&d->sp[i], &d->sp[i + 1]);
			i++;
		}
		i = 0;
		c++;
	}
}

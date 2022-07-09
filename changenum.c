/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   changenum.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gemartin <gemartin@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 01:40:05 by gemartin          #+#    #+#             */
/*   Updated: 2022/04/13 11:37:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include <stdio.h>

void	changenum(t_list *d)
{
	int	j;
	int	i;

	j = 0;
	i = 0;
	while (j < d->argc)
	{
		if (d->sa[j] != d->sp[i])
			i++;
		else
		{
			d->sa[j] = i;
			j++;
			i = 0;
		}
	}
}

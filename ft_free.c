/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 23:01:26 by marvin            #+#    #+#             */
/*   Updated: 2022/07/08 13:45:55 by gemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include<stdio.h>

void	ft_free(t_list *d)
{
	if (d->sa[0] && d->error == 0)
	{
		free(d->sa);
		d->sa = NULL;
	}
	if (d->sb[0] && d->error == 0)
	{
		free(d->sb);
		d->sb = NULL;
	}
	if (d->sp[0] && d->error == 0)
	{
		free(d->sp);
		d->sp = NULL;
	}
	if (d->error == 0)
	{
		write(2, "Error\n", 6);
		d->error++;
	}
	if (d && d->error == 1)
	{
		free(d);
		d = NULL;
	}
}

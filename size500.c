/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size500.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 21:42:25 by marvin            #+#    #+#             */
/*   Updated: 2022/04/12 21:29:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	size500(t_list *d)
{
	d->lsp = d->argc -1;
	d->control = 0;
	d->percentage = 1;
	d->cont = 12;
	sortnum(d);
	changenum(d);
	ordernums(d);
}
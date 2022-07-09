/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gemartin <gemartin@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 13:52:44 by gemartin          #+#    #+#             */
/*   Updated: 2022/04/07 23:10:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	rra(t_list *d)
{
	int	i;

	i = d->sia - 1;
	while (i > 0)
	{
		swap(&d->sa[i], &d->sa[i - 1]);
		i--;
	}
	write(2, "rra\n", 4);
}

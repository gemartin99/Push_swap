/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gemartin <gemartin@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 01:33:01 by gemartin          #+#    #+#             */
/*   Updated: 2022/04/07 20:26:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/pushswap_bonus.h"

void	swap(int *argv1, int *argv2)
{
	int	temp;

	temp = *argv1;
	*argv1 = *argv2;
	*argv2 = temp;
}

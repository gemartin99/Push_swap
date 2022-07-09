/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg2_to_int.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 10:43:50 by marvin            #+#    #+#             */
/*   Updated: 2022/04/13 18:01:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	craft_result(char *s, t_list *d, int i, int start)
{
	char	*arg;
	int		j;

	j = d->jatoi;
	arg = ft_substr(s, start, i - start + 1);
	d->sa[j] = ft_atoi(arg, d);
	d->sp[j] = ft_atoi(arg, d);
	d->jatoi++;
	free(arg);
}

int	ft_arg2_to_int(char *s, t_list *d)
{
	int		i;
	int		start;

	d->jatoi = 0;
	i = 0;
	start = 0;
	while (s[i])
	{
		if (s[start] == '-' && i == start)
			i++;
		if (ft_isdigit(s[i]) == 0 && s[i] != ' ' && s[i] != '\0')
			return (-1);
		if (s[i] == ' ' && (s[i + 1] != ' ' || s[i + 1] != '\0'))
			start = i + 1;
		if (ft_isdigit(s[i]) == 1 && (s[i + 1] == ' ' || s[i + 1] == '\0'))
		{
			craft_result(s, d, i, start);
			if (d->atoierror == 1)
				return (-1);
		}
		i++;
	}
	return (0);
}

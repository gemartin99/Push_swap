/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gemartin <gemartin@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 01:26:42 by gemartin          #+#    #+#             */
/*   Updated: 2022/04/13 18:19:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include<unistd.h>
# include<stdlib.h>
# include<limits.h>

typedef struct s_list
{
	int	*sa;
	int	*sb;
	int	*sp;
	int	sia;
	int	sib;
	int	sip;
	int	argc;
	int	percentage;
	int	lsp;
	int	control;
	int	cont;
	int	error;
	int	atoierror;
	int	jatoi;
}	t_list;

char	*ft_substr(char *s, int start, int len);
int		main(int argc, char **argv);
int		ft_strlen(char *s);
int		ft_atoi(const char *str, t_list *d);
int		check_same_nums(t_list *d);
int		check_order(t_list *d);
int		ft_isdigit(int i);
int		ft_space(char *s);
int		check_num(char *s);
int		ft_arg2_to_int(char *s, t_list *d);
void	swap(int *argv1, int *argv2);
void	sortnum(t_list *d);
void	changenum(t_list *d);
void	ordernums(t_list *d);
void	sa(int *sa);
void	rra(t_list *d);
void	rrb(t_list *d);
void	ra(t_list *d);
void	size3(int *s, t_list *d);
void	size5(int *s, t_list *d);
void	size100(t_list *d);
void	size500(t_list *d);
void	pa(t_list *d);
void	pb(t_list *d);
void	ordernums_peq(t_list *d);
void	rb(t_list *d);
void	rr(t_list *d);
void	rrr(t_list *d);
void	ft_free(t_list *d);

#endif

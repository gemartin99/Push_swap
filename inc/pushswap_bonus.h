/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap_bonus.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gemartin <gemartin@student.42barc...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 01:26:42 by gemartin          #+#    #+#             */
/*   Updated: 2022/08/09 11:26:07 by gemartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSHSWAP_BONUS_H
# define PUSHSWAP_BONUS_H

# include<unistd.h>
# include<stdlib.h>
# include<limits.h>

typedef struct s_list
{
	int	*sa;
	int	*sb;
	int	sia;
	int	sib;
	int	argc;
	int	error;
	int	atoierror;
	int	jatoi;
}	t_list;

char	*ft_substr(char *s, int start, int len);
char	*get_next_line(int fd);
int		checker_bonus(int argc, char **argv);
int		ft_strlen(char *s);
int		ft_atoi(const char *str, t_list *d);
int		check_same_nums(t_list *d);
int		check_args(char **args, int argc);
int		check_num(char *s);
void	ss(t_list *d);
void	sa(int *sa);
void	rra(t_list *d);
void	rrb(t_list *d);
void	ra(t_list *d);
void	pa(t_list *d);
void	pb(t_list *d);
void	rb(t_list *d);
void	rr(t_list *d);
void	rrr(t_list *d);
void	sb(int *sb);
void	swap(int *argv1, int *argv2);
void	ft_free(t_list *d, int print);
void	ft_checker_lines(t_list *d);
#endif

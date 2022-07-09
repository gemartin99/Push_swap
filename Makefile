#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gemartin <gemartin@student.42barc...>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/02 02:30:43 by gemartin          #+#    #+#              #
#    Updated: 2022/04/13 18:34:38 by marvin           ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = push_swap

GREEN := \033[0;92m

SRCS = pushswap.c ft_strlen.c ft_atoi.c swap.c sortnum.c changenum.c sa.c rra.c ra.c rrb.c \
			size3.c size5.c size100.c size500.c rb.c rr.c sb.c rrr.c check_order.c check_same_nums.c \
			ft_free.c ordernums_peq.c ordernums.c pa.c pb.c check_num.c ft_isdigit.c ft_space.c \
			ft_substr.c ft_arg2_to_int.c

INCLUDE = pushswap.h

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

OBJS = ${SRCS:.c=.o}

${NAME}: ${OBJS} $(INCLUDE)
	${CC} ${CFLAGS} ${SRCS} -o ${NAME}
	@echo "$(GREEN)Compiled successfully.$(DEF_COLOR)"

all:	${NAME}

clean:
			${RM} ${OBJS}
			@echo "$(GREEN)Objects cleaned successfully.$(DEF_COLOR)"

fclean: clean
			${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re

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

NAME_BONUS = checker

GREEN := \033[0;92m
YELLOW=\033[1;33m
BLUE=\033[0;34m
RED=\033[0;31m
WHITE= @echo "\033[0;37m"

SRCS = ./src/pushswap.c ./src/ft_strlen.c ./src/ft_atoi.c ./src/swap.c ./src/sortnum.c \
			./src/changenum.c ./src/sa.c ./src/rra.c ./src/ra.c ./src/rrb.c \
			./src/size3.c ./src/size5.c ./src/size100.c ./src/size500.c \
			./src/rb.c ./src/rr.c ./src/sb.c ./src/rrr.c ./src/check_order.c \
			./src/check_same_nums.c ./src/ft_free.c ./src/ordernums_peq.c ./src/ordernums.c \
			./src/pa.c ./src/pb.c ./src/check_num.c ./src/ft_isdigit.c \
			./src/ft_substr.c ./src/ft_free2.c ./src/check_args.c

BONUS_SRC = ./bns/checker_bonus.c ./bns/ss_bonus.c ./bns/sa_bonus.c ./bns/sb_bonus.c ./bns/pa_bonus.c \
				./bns/rb_bonus.c ./bns/rr_bonus.c ./bns/rra_bonus.c ./bns/rrb_bonus.c ./bns/rrr_bonus.c ./bns/swap_bonus.c \
				./bns/get_next_line_bonus.c ./bns/checker_lines_bonus.c ./bns/check_same_nums_bonus.c \
				./bns/utils_bonus.c ./bns/check_args_bonus.c ./bns/pb_bonus.c ./bns/ra_bonus.c

INCLUDE = ./inc/pushswap.h

INCLUDE_BONUS = ./inc/pushswap_bonus.h

CC = gcc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -MMD

.c.o:
			${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

OBJS = ${SRCS:.c=.o}
BONUS_OBJS = ${BONUS_SRC:.c=.o}
DEPS = $(addsuffix .d, $(basename $(SRCS)))
DEPS2 = $(addsuffix .d, $(basename $(BONUS_SRC)))

all:	${NAME}

-include ${DEPS}
${NAME}: ${OBJS} $(INCLUDE)
	${CC} ${SRCS} -o ${NAME}

-include ${DEPS2}
bonus: ${BONUS_OBJS}
				@touch $@
				${CC} ${BONUS_SRC} -o ${NAME_BONUS}

clean:
			${RM} ${OBJS} ${BONUS_OBJS}
			${RM} ${DEPS} ${DEPS2}

fclean: clean
			${RM} bonus
			${RM} ${NAME} ${NAME_BONUS} 

re: fclean all

.PHONY: all clean fclean re
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

DEL_LINE =		\033[2K
ITALIC =		\033[3m
BOLD =			\033[1m
DEF_COLOR =		\033[0;39m
GRAY =			\033[0;90m
RED =			\033[0;91m
GREEN =			\033[0;92m
YELLOW =		\033[0;93m
BLUE =			\033[0;94m
MAGENTA =		\033[0;95m
CYAN =			\033[0;96m
WHITE =			\033[0;97m
BLACK =			\033[0;99m
ORANGE =		\033[38;5;209m
BROWN =			\033[38;2;184;143;29m
DARK_GRAY =		\033[38;5;234m
MID_GRAY =		\033[38;5;245m
DARK_GREEN =	\033[38;2;75;179;82m
DARK_YELLOW =	\033[38;5;143m

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

%.o: %.c
			@echo "${BLUE} ◎ $(BROWN)Compiling   ${MAGENTA}→   $(CYAN)$< $(DEF_COLOR)"
			@${CC} ${CFLAGS} -c $< -o $@

OBJS = ${SRCS:.c=.o}
BONUS_OBJS = ${BONUS_SRC:.c=.o}
DEPS = $(addsuffix .d, $(basename $(SRCS)))
DEPS2 = $(addsuffix .d, $(basename $(BONUS_SRC)))

all:	${NAME}

-include ${DEPS}
${NAME}: ${OBJS} $(INCLUDE)
	@${CC} ${SRCS} -o ${NAME}
	@echo "\n$(GREEN) Created $(NAME) ✓ $(DEF_COLOR)\n"

-include ${DEPS2}
bonus: ${BONUS_OBJS}
				@touch $@
				@${CC} ${BONUS_SRC} -o ${NAME_BONUS}
				@echo "\n$(GREEN)Created ${NAME_BONUS} ✓$(DEF_COLOR)\n"

clean:
			@${RM} ${OBJS} ${BONUS_OBJS}
			@${RM} ${DEPS} ${DEPS2}
			@echo "\n${BLUE} ◎ $(RED)All objects cleaned successfully ${BLUE}◎$(DEF_COLOR)\n"

fclean: 
			@${RM} ${OBJS} ${BONUS_OBJS}
			@${RM} ${DEPS} ${DEPS2}
			@${RM} bonus
			@${RM} ${NAME} ${NAME_BONUS}
			@echo "\n${BLUE} ◎ $(RED)All objects and executable cleaned successfully${BLUE} ◎$(DEF_COLOR)\n"

re: fclean all

.PHONY: all clean fclean re
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjaroens <jjaroens@student.42bangkok.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/23 21:41:49 by jjaroens          #+#    #+#              #
#    Updated: 2024/02/03 17:05:41 by jjaroens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# LIBFT = ./libft/libft.a
SRCS = ft_printf.c ft_put_utils.c ft_put_format.c
OBJS = $(SRCS:.c=.o)
NAME = libftprintf.a
CC	= cc
HEADER  = ft_printf.h
RM	= rm -f
CFLAGS	= -Wall -Wextra -Werror
.c.o:
	${CC} ${CFLAGS} -c -I . $< -o ${<:.c=.o}
	
all: ${NAME}

${NAME}: ${OBJS} ${HEADER}
		ar rc ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re:	fclean all

.PHONY:	all	clean fclean re

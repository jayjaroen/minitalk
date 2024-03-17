# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/17 16:19:17 by jjaroens          #+#    #+#              #
#    Updated: 2024/03/17 17:55:43 by jjaroens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SERVER = server
SERVER_SRCS = server.c client.c
FT_PRINTF = ./ft_printf/libftprintf.a
INCLUDE = incl
HEADER = $(INCLUDE)/minitalk.h
CC = cc
CFLAGS = -Wall -Werror -Wextra
SERVER_OBJS = $(SERVER_SRCS:.c=.o) 

all:	$(SERVER)

$(SERVER_OBJS): %.o: %.c $(HEADER)
	cc $(CFLAGS) -I$(INCLUDE) -c $< -o $@ 

$(FT_PRINTF):
			make -C ./ft_printf

$(SERVER):	$(SERVER_OBJS) $(FT_PRINTF)
			$(CC) $(CFLAGS) -I$(INCLUDE) $(SERVER_OBJS) $(FT_PRINTF) -o $(SERVER)

clean:
	rm -f $(SERVER_OBJS)

fclean: clean
	$(MAKE) fclean -C ft_printf
	rm -f ./ft_printf/ft_printf.a
	rm -f minitalk
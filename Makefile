# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/17 16:19:17 by jjaroens          #+#    #+#              #
#    Updated: 2024/03/23 17:52:13 by jjaroens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SERVER = server
CLENT = client
SERVER_SRCS = server_bonus.c
CLENT_SRCS = client_bonus.c
FT_PRINTF = ./ft_printf/libftprintf.a
INCLUDE = incl
HEADER = $(INCLUDE)/minitalk.h
CC = cc
CFLAGS = -Wall -Werror -Wextra
SERVER_OBJS = $(SERVER_SRCS:.c=.o)
CLIENT_OBJS = $(CLENT_SRCS:.c=.o)

all:	$(SERVER) $(CLENT)

$(SERVER_OBJS): %.o: %.c $(HEADER)
	cc $(CFLAGS) -I$(INCLUDE) -c $< -o $@

$(CLENT_OBJS): %.o: %.c $(HEADER)
	cc $(CLFAGS) -I$(INCLUDE) -c $< -o $@

$(FT_PRINTF):
			make -C ./ft_printf

$(SERVER):	$(SERVER_OBJS) $(FT_PRINTF)
			$(CC) $(CFLAGS) -I$(INCLUDE) $(SERVER_OBJS) $(FT_PRINTF) -o $(SERVER)

$(CLIENT):	$(CLIENT_OBJS) $(FT_PRINTF)
			$(CC) $(CFLAGS) -I$(INCLUDE) $(CLENT_OBJS) $(FT_PRINTF) -o $(CLIENT)
clean:
	rm -f $(SERVER_OBJS)
	rm -f $(CLIENT_OBJS)

fclean: clean
	$(MAKE) fclean -C ft_printf
	rm -f ./ft_printf/ft_printf.a
	rm -f minitalk

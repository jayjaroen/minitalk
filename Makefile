# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jjaroens <jjaroens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/17 16:19:17 by jjaroens          #+#    #+#              #
#    Updated: 2024/03/24 13:59:43 by jjaroens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SERVER = server
CLIENT = client
SERVER_SRCS = server.c
CLIENT_SRCS = client.c
LIBFT = ./Libft/libft.a
INCLUDE = incl
HEADER = $(INCLUDE)/minitalk.h
CC = cc
CFLAGS = -Wall -Werror -Wextra
SERVER_OBJS = $(SERVER_SRCS:.c=.o)
CLIENT_OBJS = $(CLIENT_SRCS:.c=.o)

all: $(SERVER) $(CLIENT) 

$(SERVER_OBJS): %.o: %.c $(HEADER)
	cc $(CFLAGS) -I$(INCLUDE) -c $< -o $@

$(CLIENT_OBJS): %.o: %.c $(HEADER)
	cc $(CLFAGS) -I$(INCLUDE) -c $< -o $@

$(LIBFT):
	make -C ./Libft

$(SERVER):	$(SERVER_OBJS) $(LIBFT)
	$(CC) $(CFLAGS) -I$(INCLUDE) $(SERVER_OBJS) $(LIBFT) -o $(SERVER)

$(CLIENT):	$(CLIENT_OBJS) $(LIBFT)
	$(CC) $(CFLAGS) -I$(INCLUDE) $(CLIENT_OBJS) $(LIBFT) -o $(CLIENT)

clean:
	rm -f $(SERVER_OBJS)
	rm -f $(CLIENT_OBJS)

fclean: clean
	$(MAKE) fclean -C Libft
	rm -f ./Libft/libft.a
	rm -f minitalk

norminette:
	@norminette -R CheckForbiddenSourceHeader *.c
	@norminette -R CheckForbiddenSourceHeader Libft/*.c
	@norminette -R CheckDefine Libft/libft.h
	@norminette -R CheckDefine $(INCLUDE)/*.h

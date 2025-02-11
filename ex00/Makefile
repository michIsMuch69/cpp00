# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/15 08:57:47 by jedusser          #+#    #+#              #
#    Updated: 2025/01/27 14:34:13 by jedusser         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = megaphone.cpp
OBJS = megaphone.o

NAME = megaphone

all : $(NAME)

$(NAME): $(OBJS)
	@echo "Building $(NAME)"
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	
$(OBJS): $(SRCS)
	@echo "compiling $< to $@"
	$(CC) $(CFLAGS) -c $< -o $@


clean: 
	rm -rf $(OBJS)

fclean:	clean
	rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re
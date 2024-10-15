# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/15 15:22:05 by jedusser          #+#    #+#              #
#    Updated: 2024/10/15 15:22:38 by jedusser         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp
OBJS = main.o

NAME = phonebook

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
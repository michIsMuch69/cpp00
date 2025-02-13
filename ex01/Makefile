# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/03 10:23:34 by jedusser          #+#    #+#              #
#    Updated: 2025/02/13 11:00:08 by jedusser         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC_DIR = .
OBJ_DIR = obj

NAME = phonebook

SRCS = main.cpp \
       Contact.cpp \
       PhoneBook.cpp \
	Contact.setters.cpp	\
	Contact.getters.cpp \
	parsing_utils.cpp


OBJS = $(OBJ_DIR)/main.o \
       $(OBJ_DIR)/Contact.o \
       $(OBJ_DIR)/PhoneBook.o \
       $(OBJ_DIR)/Contact.setters.o \
       $(OBJ_DIR)/Contact.getters.o \
	   	$(OBJ_DIR)/parsing_utils.o



all: $(NAME)

$(NAME): $(OBJS) Makefile
	@echo "Building $(NAME)"
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@echo "Compiling $< to $@"
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
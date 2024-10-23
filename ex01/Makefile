# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/15 15:22:05 by jedusser          #+#    #+#              #
#    Updated: 2024/10/23 09:11:36 by jedusser         ###   ########.fr        #
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
       GetContact.cpp \
       SetContact.cpp


OBJS = $(OBJ_DIR)/main.o \
       $(OBJ_DIR)/Contact.o \
       $(OBJ_DIR)/PhoneBook.o \
       $(OBJ_DIR)/GetContact.o \
       $(OBJ_DIR)/SetContact.o


all: $(NAME)

$(NAME): $(OBJS) 
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

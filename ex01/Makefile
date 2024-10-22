# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jedusser <jedusser@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/15 15:22:05 by jedusser          #+#    #+#              #
#    Updated: 2024/10/22 11:45:44 by jedusser         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC_DIR = .
OBJ_DIR = obj

NAME = phonebook

SRCS = main.cpp \
       Contact.class.cpp \
       PhoneBook.class.cpp \
       get_Contacts.cpp \
       Set_Contacts.cpp


OBJS = $(OBJ_DIR)/main.o \
       $(OBJ_DIR)/Contact.class.o \
       $(OBJ_DIR)/PhoneBook.class.o \
       $(OBJ_DIR)/get_Contacts.o \
       $(OBJ_DIR)/Set_Contacts.o


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

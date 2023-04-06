# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saguesse <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/06 17:24:07 by saguesse          #+#    #+#              #
#    Updated: 2023/04/06 18:41:25 by saguesse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CC = g++
CFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -f

SRC_FILES = megaphone.cpp

OBJ = $(SRC_FILES:.cpp=.o)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

%.o : %.cpp
	$(CC) $(CFLAGS) -cpp $< -o

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean
	make all

.PHONY: all clean fclean re

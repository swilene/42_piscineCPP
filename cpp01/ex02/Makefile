# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: saguesse <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/06 17:24:07 by saguesse          #+#    #+#              #
#    Updated: 2023/04/13 11:40:35 by saguesse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = brain
CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
RM = rm -f

SRC_FILES = main.cpp \

OBJ = $(SRC_FILES:.cpp=.o)

$(NAME): $(OBJ)
	$(CXX) $(OBJ) -o $(NAME)

%.o : %.c
	$(CXX) $(CXXFLAGS) -c $< -o

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean
	make all

.PHONY: all clean fclean re
